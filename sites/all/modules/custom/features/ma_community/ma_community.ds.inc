<?php
/**
 * @file
 * ma_community.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ma_community_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|browse_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
  $ds_fieldsetting->view_mode = 'browse_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|community|browse_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'admin_actions' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|community|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|community|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'community';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'admin_actions' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|community|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_community_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|browse_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
  $ds_layout->view_mode = 'browse_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_media',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_media' => 'ds_content',
      'title' => 'ds_content',
    ),
    'limit' => array(
      'field_media' => '1',
    ),
    'classes' => array(),
  );
  $export['node|community|browse_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_media',
        1 => 'body',
        2 => 'comments',
      ),
      'right' => array(
        0 => 'links',
        1 => 'admin_actions',
      ),
    ),
    'fields' => array(
      'field_media' => 'left',
      'body' => 'left',
      'comments' => 'left',
      'links' => 'right',
      'admin_actions' => 'right',
    ),
    'classes' => array(
      'header' => array(
        'grid-6' => 'grid-6',
      ),
      'left' => array(
        'grid-6' => 'grid-6',
      ),
      'right' => array(
        'grid-4' => 'grid-4',
      ),
    ),
  );
  $export['node|community|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|community|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'community';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_media',
        1 => 'body',
        2 => 'group_access',
        3 => 'comments',
      ),
      'right' => array(
        0 => 'links',
        1 => 'admin_actions',
      ),
    ),
    'fields' => array(
      'field_media' => 'left',
      'body' => 'left',
      'group_access' => 'left',
      'comments' => 'left',
      'links' => 'right',
      'admin_actions' => 'right',
    ),
    'classes' => array(
      'header' => array(
        'grid-6' => 'grid-6',
      ),
      'left' => array(
        'grid-6' => 'grid-6',
      ),
      'right' => array(
        'grid-4' => 'grid-4',
      ),
    ),
  );
  $export['node|community|full'] = $ds_layout;

  return $export;
}
