<?php
/**
 * @file
 * ma_core.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_core_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = '3col_unbalanced_html5';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'comments',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'comments' => 'left',
    ),
    'classes' => array(
      'header' => array(
        'grid-6' => 'grid-6',
      ),
      'left' => array(
        'grid-6' => 'grid-6',
      ),
      'right' => array(
        'grid-2' => 'grid-2',
      ),
    ),
  );
  $export['node|page|full'] = $ds_layout;

  return $export;
}
