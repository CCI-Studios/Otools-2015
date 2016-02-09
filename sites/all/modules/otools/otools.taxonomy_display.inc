<?php
/**
 * @file
 * otools.taxonomy_display.inc
 */

/**
 * Implements hook_taxonomy_display_default_displays().
 */
function otools_taxonomy_display_default_displays() {
  $export = array();

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'parts_category';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerHidden';
  $taxonomy_display->associated_display_options = '';
  $taxonomy_display->add_feed = TRUE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerCore';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['parts_category'] = $taxonomy_display;

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'rental_category';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerHidden';
  $taxonomy_display->associated_display_options = '';
  $taxonomy_display->add_feed = TRUE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerHidden';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['rental_category'] = $taxonomy_display;

  return $export;
}
