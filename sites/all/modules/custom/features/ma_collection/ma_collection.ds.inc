<?php
/**
 * @file
 * ma_collection.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ma_collection_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ma_collection|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ma_collection';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_exif',
    ),
  );
  $export['node|ma_collection|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_collection_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ma_collection|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ma_collection';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'author',
        2 => 'post_date',
        3 => 'field_description',
      ),
      'left' => array(
        0 => 'field_media',
      ),
      'right' => array(
        0 => 'field_reference_digital_heritage',
      ),
      'footer' => array(
        0 => 'links',
        1 => 'comments',
        2 => 'field_community_groups',
        3 => 'group_audience',
        4 => 'field_cultural_protocol_groups',
        5 => 'field_tags',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'author' => 'header',
      'post_date' => 'header',
      'field_description' => 'header',
      'field_media' => 'left',
      'field_reference_digital_heritage' => 'right',
      'links' => 'footer',
      'comments' => 'footer',
      'field_community_groups' => 'footer',
      'group_audience' => 'footer',
      'field_cultural_protocol_groups' => 'footer',
      'field_tags' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|ma_collection|default'] = $ds_layout;

  return $export;
}
