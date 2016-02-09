<?php
print views_embed_view('rental_detail', 'block', $node->nid);

$tids = array();
foreach ($node->field_cart_category['und'] as $term)
{
    $tids[] = $term['tid'];
}

print '<div class="related-items-container"><h2>Related Items</h2>';
print views_embed_view('related_items', 'block', implode(',',$tids));
print '</div>';
?>
