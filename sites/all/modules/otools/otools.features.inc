<?php
/**
 * @file
 * otools.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function otools_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function otools_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function otools_image_default_styles() {
  $styles = array();

  // Exported image style: feature.
  $styles['feature'] = array(
    'label' => 'Feature',
    'effects' => array(
      2 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_image.
  $styles['header_image'] = array(
    'label' => 'Header image',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1220,
          'height' => 480,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_detail.
  $styles['product_detail'] = array(
    'label' => 'Product detail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 800,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_detail_thumbnail.
  $styles['product_detail_thumbnail'] = array(
    'label' => 'Product detail thumbnail',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_thumbnail.
  $styles['product_thumbnail'] = array(
    'label' => 'Product thumbnail',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 212,
          'height' => 180,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: related_item.
  $styles['related_item'] = array(
    'label' => 'Related item',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 154,
          'height' => 126,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function otools_node_info() {
  $items = array(
    'carts' => array(
      'name' => t('Carts'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'feature' => array(
      'name' => t('Feature'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'header_image' => array(
      'name' => t('Header image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'parts' => array(
      'name' => t('Parts'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rental' => array(
      'name' => t('Rentals'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
