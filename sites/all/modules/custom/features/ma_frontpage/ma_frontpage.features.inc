<?php
/**
 * @file
 * ma_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ma_frontpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ma_frontpage_views_api() {
  return array("version" => "3.0");
}
