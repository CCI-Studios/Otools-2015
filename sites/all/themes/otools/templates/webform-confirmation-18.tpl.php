<?php

/**
 * @file
 * Customize confirmation screen after successful submission.
 *
 * This file may be renamed "webform-confirmation-[nid].tpl.php" to target a
 * specific webform e-mail on your site. Or you can leave it
 * "webform-confirmation.tpl.php" to affect all webform confirmations on your
 * site.
 *
 * Available variables:
 * - $node: The node object for this webform.
 * - $confirmation_message: The confirmation message input by the webform author.
 * - $sid: The unique submission ID of this submission.
 */
if ($sid) {
  include_once(drupal_get_path('module', 'webform') .'/includes/webform.submissions.inc');
  $submission = webform_get_submission(18, $sid);
  $name = $submission->data[1][0];
  $email = $submission->data[2][0];
  $address = $submission->data[4][0];
  $city = $submission->data[5][0];
  $postalcode = $submission->data[6][0];
  $package = $submission->data[18][0];
  if ($package === '1') {
    $amount = '199.00';
    $package_name = 'Basic Electric Package';
  } else if ($package === '2') {
    $amount = '249.00';
    $package_name = 'Supreme Electric Package';
  } else if ($package === '3') {
    $amount = '199.00';
    $package_name = 'Basic Gas Package';
  } else if ($package === '4') {
    $amount = '279.00';
    $package_name = 'Supreme Gas Package';
  }
}

?>
<div class="webform-confirmation">
  <?php if ($confirmation_message): ?>
    <?php print $confirmation_message ?>
  <?php else: ?>
    <p><?php print t('Thank you, your submission has been received.'); ?></p>
  <?php endif; ?>

  <?php if ($submission): ?>
    <form action="https://www.paypal.com/cgi-bin/webscr" method="post">
      <input type="hidden" name="cmd" value="_xclick">
      <input type="hidden" name="business" value="don@otools.ca">
      <input type="hidden" name="currency_code" value="CAD">
      <input type="hidden" name="amount" value="<?php print $amount;?>">
      <input type="hidden" name="quantity" value="1">
      <input type="hidden" name="tax_rate" value="13">
      <input type="hidden" name="item_name" value="<?php print $package_name;?>">
      <input type="hidden" name="no_shipping" value="1">
      <input type="hidden" name="no_note" value="1">
      <input type="hidden" name="rm" value="1">
      <input type="hidden" name="first_name" value="<?php print $name;?>">
      <input type="hidden" name="email" value="<?php print $email;?>">
      <input type="hidden" name="address1" value="<?php print $address;?>">
      <input type="hidden" name="city" value="<?php print $city;?>">
      <input type="hidden" name="postal_code" value="<?php print $postalcode;?>">
      <input type="hidden" name="country" value="CA">
      <input type="hidden" name="cbt" value="Return to Otools.ca">
      <input type="hidden" name="page_style" value="primarya">
      <button type="submit" class="button">Pay Now</button>
    </form>
  <?php endif; ?>
</div>
