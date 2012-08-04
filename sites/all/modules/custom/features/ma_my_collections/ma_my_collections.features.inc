<?php
/**
 * @file
 * ma_my_collections.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ma_my_collections_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ma_my_collections_flag_default_flags() {
  $flags = array();
  // Exported flag: "Add to My Collection".
  $flags['add_to_my_collection'] = array(
    'content_type' => 'node',
    'title' => 'Add to My Collection',
    'global' => '0',
    'types' => array(
      0 => 'ma_collection',
      1 => 'digital_heritage',
    ),
    'flag_short' => 'Add this to My Collection',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove this from My Collection',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '3',
        2 => '5',
        3 => '8',
        4 => '7',
        5 => '4',
      ),
      'unflag' => array(
        0 => '2',
        1 => '3',
        2 => '5',
        3 => '8',
        4 => '7',
        5 => '4',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => '0',
    'module' => 'ma_my_collections',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}
