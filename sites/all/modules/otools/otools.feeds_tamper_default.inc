<?php
/**
 * @file
 * otools.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function otools_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'doubletake_parts-desc_2-rewrite';
  $feeds_tamper->importer = 'doubletake_parts';
  $feeds_tamper->source = 'DESC_2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '<p>SKU [ot sku]</p>
<p>[desc_2]<br>[desc_3]<br>[desc_4]<br>[desc_5]<br>[desc_6]<br>[desc_7]<br>[desc_8]</p>',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['doubletake_parts-desc_2-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'doubletake_parts-image-explode';
  $feeds_tamper->importer = 'doubletake_parts';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['doubletake_parts-image-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'doubletake_parts-image-rewrite';
  $feeds_tamper->importer = 'doubletake_parts';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://parts/[image].jpg',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Rewrite';
  $export['doubletake_parts-image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'doubletake_parts-sell-rewrite';
  $feeds_tamper->importer = 'doubletake_parts';
  $feeds_tamper->source = 'SELL';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '$[sell]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['doubletake_parts-sell-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'parts-desc_2-rewrite';
  $feeds_tamper->importer = 'parts';
  $feeds_tamper->source = 'Desc_2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '<p>SKU [ot sku]</p>
<p>[desc_2]<br>
[desc_3]<br>
[desc_4]<br>
[desc_5]<br>
[desc_6]<br>
[desc_7]<br>
[desc_8]<br>
[desc_9]<br>
[desc_10]
</p>',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['parts-desc_2-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'parts-image_1-rewrite';
  $feeds_tamper->importer = 'parts';
  $feeds_tamper->source = 'Image 1';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://parts/madjax2/[image 1].jpg',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['parts-image_1-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'parts-sell-rewrite';
  $feeds_tamper->importer = 'parts';
  $feeds_tamper->source = 'SELL';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '$[sell]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['parts-sell-rewrite'] = $feeds_tamper;

  return $export;
}
