<?php
/**
 * @file
 * ma_culturalprotocol.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ma_culturalprotocol_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_cultural_protocol_group';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_cultural_protocol_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_cultural_protocol_group';
  $strongarm->value = 1;
  $export['enable_revisions_page_cultural_protocol_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_cultural_protocol_group';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_cultural_protocol_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_cultural_protocol_group';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_cultural_protocol_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_cultural_protocol_group';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_cultural_protocol_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_cultural_protocol_group';
  $strongarm->value = '0';
  $export['node_preview_cultural_protocol_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_cultural_protocol_group';
  $strongarm->value = 0;
  $export['node_submitted_cultural_protocol_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_group_content_type_cultural_protocol_group';
  $strongarm->value = 'omitted';
  $export['og_group_content_type_cultural_protocol_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_cultural_protocol_group';
  $strongarm->value = 0;
  $export['show_diff_inline_cultural_protocol_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_cultural_protocol_group';
  $strongarm->value = 1;
  $export['show_preview_changes_cultural_protocol_group'] = $strongarm;

  return $export;
}
