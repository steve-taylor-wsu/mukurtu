<?php
/**
 * @file
 * ma_collection.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ma_collection_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collection|node|ma_collection|form';
  $field_group->group_name = 'group_collection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ma_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '1. Collection',
    'weight' => '0',
    'children' => array(
      0 => 'field_community_groups',
      1 => 'field_cultural_protocol_groups',
      2 => 'field_description',
      3 => 'field_media',
      4 => 'field_tags',
      5 => 'group_audience',
      6 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_collection|node|ma_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_digital_heritage|node|ma_collection|form';
  $field_group->group_name = 'group_digital_heritage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ma_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '2. Digital Heritage',
    'weight' => '1',
    'children' => array(
      0 => 'field_reference_digital_heritage',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_digital_heritage|node|ma_collection|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|ma_collection|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ma_collection';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '9',
    'children' => array(
      0 => 'group_collection',
      1 => 'group_digital_heritage',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|node|ma_collection|form'] = $field_group;

  return $export;
}
