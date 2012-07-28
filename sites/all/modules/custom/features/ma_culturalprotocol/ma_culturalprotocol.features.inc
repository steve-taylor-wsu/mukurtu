<?php
/**
 * @file
 * ma_culturalprotocol.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ma_culturalprotocol_ctools_plugin_api() {
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
function ma_culturalprotocol_node_info() {
  $items = array(
    'cultural_protocol_group' => array(
      'name' => t('Cultural Protocols'),
      'base' => 'node_content',
      'description' => t('Cultural Protocols can be assigned to groups and to individual items. Using these protocols allows you to determine how content can be made available to members of the group. Examples of protocols are: "Gender: Male", or "Age: Elder". Read more about this on our <a href:="http://www.mukurtu.org/wiki/Manual:Add_cultural_protocols";>wiki</a>.'),
      'has_title' => '1',
      'title_label' => t('Cultural Protocol'),
      'help' => t('Cultural Protocols can be assigned to groups and to individual items. Using these protocols allows you to determine how content can be made available to members of the group. Examples of protocols are: "Gender: Male", or "Age: Elder". Read more about this on our <a href:="http://www.mukurtu.org/wiki/Manual:Add_cultural_protocols";>wiki</a>.'),
    ),
  );
  return $items;
}
