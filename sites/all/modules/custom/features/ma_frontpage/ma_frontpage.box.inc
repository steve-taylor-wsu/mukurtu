<?php
/**
 * @file
 * ma_frontpage.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ma_frontpage_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ma_site_footer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Custom Site Footer';
  $box->options = array(
    'body' => array(
      'value' => '<p>Edit Site Footer here.</p>',
      'format' => 'full_html',
    ),
  );
  $export['ma_site_footer'] = $box;

  return $export;
}
