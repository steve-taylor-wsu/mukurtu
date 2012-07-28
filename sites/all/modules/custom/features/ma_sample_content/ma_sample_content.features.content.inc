<?php
/**
 * @file
 * ma_sample_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function ma_sample_content_content_defaults() {
  $content = array();

  $content['ma_demo_cp_media'] = (object) array(
    'title' => 'Sample Cultural Protocol',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'cultural_protocol_group',
    'language' => 'und',
    'created' => '1338251918',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'ma_demo_cp_media',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'This is a sample cultural protocol.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>This is a sample cultural protocol.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['ma_demo_starter_community'] = (object) array(
    'title' => 'Sample Community',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'community',
    'language' => 'und',
    'created' => '1338251909',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'ma_demo_starter_community',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'This is a sample community.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>This is a sample community.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['ma_demo_starter_digital_heritage'] = (object) array(
    'title' => 'Sample Digital Heritage #1',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'digital_heritage',
    'language' => 'und',
    'created' => '1338251967',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'ma_demo_starter_digital_heritage',
    'body' => array(),
    'field_category' => array(
      'und' => array(
        0 => array(
          'tid' => '2',
        ),
      ),
    ),
    'field_communities' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'ma_demo_starter_community',
        ),
      ),
    ),
    'field_culturalprotocol' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'ma_demo_cp_media',
        ),
      ),
    ),
    'field_description' => array(
      'und' => array(
        0 => array(
          'value' => 'This is a sample digital heritage item.',
          'summary' => '',
          'format' => NULL,
          'safe_value' => 'This is a sample digital heritage item.',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
