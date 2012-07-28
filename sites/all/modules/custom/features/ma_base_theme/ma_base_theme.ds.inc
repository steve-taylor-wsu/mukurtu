<?php
/**
 * @file
 * ma_base_theme.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ma_base_theme_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'admin_actions' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:4:"type";s:4:"both";s:2:"id";s:4:"tabs";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:9:"page_tabs";s:7:"subtype";s:9:"page_tabs";}',
        'load_terms' => 0,
      ),
    ),
    'component_media_items' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:5:"media";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"1";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:1:{s:14:"file_view_mode";s:20:"component_media_item";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:1;s:19:"override_title_text";s:16:"More Media Items";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:16:"node:field_media";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'page-title',
      ),
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '26',
      'label' => 'above',
      'format' => 'author',
    ),
  );
  $export['node|digital_heritage|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ma_base_theme_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'admin_actions';
  $ds_field->label = 'Admin Actions';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['admin_actions'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'component_media_items';
  $ds_field->label = 'More Media Items';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['component_media_items'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_base_theme_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = '3col_unbalanced_html5';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'component_media_items',
        1 => 'field_relation',
      ),
      'header' => array(
        0 => 'field_format',
        1 => 'title',
      ),
      'left' => array(
        0 => 'field_media',
        1 => 'field_description',
        2 => 'field_tk_body',
        3 => 'body',
        4 => 'comments',
      ),
      'middle' => array(
        0 => 'admin_actions',
        1 => 'field_culturalprotocol',
        2 => 'field_communities',
        3 => 'field_category',
        4 => 'field_language',
        5 => 'field_tags',
        6 => 'field_identifier',
        7 => 'field_rights',
        8 => 'field_creator',
        9 => 'field_source',
        10 => 'field_contributor',
        11 => 'field_publisher',
        12 => 'field_subject',
        13 => 'field_date',
        14 => 'field_licence_trad',
        15 => 'field_licence_std_cc',
        16 => 'group_content_access',
        17 => 'field_coverage',
        18 => 'field_coverage_description',
        19 => 'author',
      ),
    ),
    'fields' => array(
      'component_media_items' => 'right',
      'field_format' => 'header',
      'title' => 'header',
      'field_media' => 'left',
      'field_description' => 'left',
      'field_tk_body' => 'left',
      'body' => 'left',
      'comments' => 'left',
      'admin_actions' => 'middle',
      'field_culturalprotocol' => 'middle',
      'field_communities' => 'middle',
      'field_category' => 'middle',
      'field_language' => 'middle',
      'field_tags' => 'middle',
      'field_identifier' => 'middle',
      'field_rights' => 'middle',
      'field_creator' => 'middle',
      'field_source' => 'middle',
      'field_contributor' => 'middle',
      'field_publisher' => 'middle',
      'field_subject' => 'middle',
      'field_date' => 'middle',
      'field_licence_trad' => 'middle',
      'field_licence_std_cc' => 'middle',
      'group_content_access' => 'middle',
      'field_coverage' => 'middle',
      'field_coverage_description' => 'middle',
      'author' => 'middle',
      'field_relation' => 'right',
    ),
    'limit' => array(
      'field_media' => '1',
    ),
    'classes' => array(
      'header' => array(
        'grid-6' => 'grid-6',
      ),
      'left' => array(
        'grid-6' => 'grid-6',
      ),
      'middle' => array(
        'grid-4' => 'grid-4',
      ),
      'right' => array(
        'grid-2' => 'grid-2',
      ),
    ),
  );
  $export['node|digital_heritage|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ma_base_theme_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'component_media_item';
  $ds_view_mode->label = 'Component Media Item';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['component_media_item'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_content';
  $ds_view_mode->label = 'Full content';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['full_content'] = $ds_view_mode;

  return $export;
}
