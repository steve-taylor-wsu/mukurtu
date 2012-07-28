<?php
/**
 * @file
 * ma_community.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ma_community_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ma_community_node_info() {
  $items = array(
    'community' => array(
      'name' => t('Community'),
      'base' => 'node_content',
      'description' => t('Community Groups can be used for content and user assignments, and community content can be made available to members of the group only.'),
      'has_title' => '1',
      'title_label' => t('Community Name'),
      'help' => t('Community affiliation. This is a "group" content type. Both users and other content can be associated to Community items, and community content can be made available to members of the group only.'),
    ),
  );
  return $items;
}
