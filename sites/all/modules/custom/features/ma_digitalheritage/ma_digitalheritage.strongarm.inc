<?php
/**
 * @file
 * ma_digitalheritage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ma_digitalheritage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_digital_heritage';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_digital_heritage';
  $strongarm->value = '0';
  $export['comment_anonymous_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_digital_heritage';
  $strongarm->value = 1;
  $export['comment_default_mode_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_digital_heritage';
  $strongarm->value = '50';
  $export['comment_default_per_page_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_digital_heritage';
  $strongarm->value = '2';
  $export['comment_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_digital_heritage';
  $strongarm->value = 1;
  $export['comment_form_location_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_digital_heritage';
  $strongarm->value = '1';
  $export['comment_preview_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_digital_heritage';
  $strongarm->value = 1;
  $export['comment_subject_field_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'community_tags_display_digital_heritage';
  $strongarm->value = '2';
  $export['community_tags_display_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'community_tags_vocabularies';
  $strongarm->value = array(
    'tags' => array(
      'is_enabled' => 1,
      'types' => array(
        'page' => array(
          'is_valid' => TRUE,
          'display_handler' => 'links',
          'opmode' => 0,
        ),
        'digital_heritage' => array(
          'is_valid' => TRUE,
          'display_handler' => 'links',
          'opmode' => 2,
        ),
      ),
    ),
  );
  $export['community_tags_vocabularies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_digital_heritage';
  $strongarm->value = 1;
  $export['enable_revisions_page_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_digital_heritage';
  $strongarm->value = array();
  $export['menu_options_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_digital_heritage';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_digital_heritage';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_digital_heritage';
  $strongarm->value = '1';
  $export['node_preview_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_digital_heritage';
  $strongarm->value = 1;
  $export['node_submitted_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_group_type_digital_heritage';
  $strongarm->value = 'omitted';
  $export['og_group_type_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_digital_heritage';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_digital_heritage';
  $strongarm->value = 0;
  $export['show_diff_inline_digital_heritage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_digital_heritage';
  $strongarm->value = 1;
  $export['show_preview_changes_digital_heritage'] = $strongarm;

  return $export;
}