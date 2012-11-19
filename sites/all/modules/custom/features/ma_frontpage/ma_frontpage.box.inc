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

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ma_site_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Custom Site Header';
  $box->options = array(
    'body' => array(
      'value' => '<a href="/">Home</a>
<img src="http://butterflyreleasesbys.com/banner3.JPG" />',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['ma_site_header'] = $box;

  return $export;
}
