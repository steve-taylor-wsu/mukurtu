<?php
/**
 * @file
 * ma_base_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ma_base_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_styles_regions';
  $strongarm->value = 'grid-1
grid-2
grid-3
grid-4
grid-5
grid-6';
  $export['ds_styles_regions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  return $export;
}
