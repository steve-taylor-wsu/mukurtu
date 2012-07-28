<?php
/**
 * @file
 * ma_digitalheritage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ma_digitalheritage_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|taxonomy_term|category|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '2. Advanced',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '2. Advanced',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_advanced|taxonomy_term|category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|taxonomy_term|category|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => '1. Basic',
    'weight' => '3',
    'children' => array(
      0 => 'name',
      1 => 'description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '1. Basic',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_basic|taxonomy_term|category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_first|node|digital_heritage|form';
  $field_group->group_name = 'group_column_first';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column First',
    'weight' => '0',
    'children' => array(
      0 => 'group_cultural_narrative',
      1 => 'group_general',
      2 => 'group_traditional',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column First',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'grid-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column_first|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_second|node|digital_heritage|form';
  $field_group->group_name = 'group_column_second';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column Second',
    'weight' => '5',
    'children' => array(
      0 => 'group_dublin',
      1 => 'group_licensing',
      2 => 'group_map',
      3 => 'group_mukurtu_core',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column Second',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'grid-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column_second|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cultural_narrative|node|digital_heritage|form';
  $field_group->group_name = 'group_cultural_narrative';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_first';
  $field_group->data = array(
    'label' => '3. Cultural Narrative',
    'weight' => '5',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '3. Cultural Narrative',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_cultural_narrative|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dublin|node|digital_heritage|form';
  $field_group->group_name = 'group_dublin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_second';
  $field_group->data = array(
    'label' => '5. Standard Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_contributor',
      1 => 'field_creator',
      2 => 'field_date',
      3 => 'field_format',
      4 => 'field_identifier',
      5 => 'field_language',
      6 => 'field_publisher',
      7 => 'field_relation',
      8 => 'field_rights',
      9 => 'field_source',
      10 => 'field_subject',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '5. Standard Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_dublin|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|digital_heritage|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_first';
  $field_group->data = array(
    'label' => '1. General',
    'weight' => '2',
    'children' => array(
      0 => 'field_description',
      1 => 'field_media',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '1. General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_general|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_licensing|node|digital_heritage|form';
  $field_group->group_name = 'group_licensing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_second';
  $field_group->data = array(
    'label' => '6. Licensing',
    'weight' => '5',
    'children' => array(
      0 => 'field_licence_std_cc',
      1 => 'field_licence_trad',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '6. Licensing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_licensing|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_map|node|digital_heritage|form';
  $field_group->group_name = 'group_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_second';
  $field_group->data = array(
    'label' => '7. Map',
    'weight' => '6',
    'children' => array(
      0 => 'field_coverage',
      1 => 'field_coverage_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '7. Map',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_map|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mukurtu_core|node|digital_heritage|form';
  $field_group->group_name = 'group_mukurtu_core';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_second';
  $field_group->data = array(
    'label' => '4. Mukurtu Core',
    'weight' => '3',
    'children' => array(
      0 => 'field_category',
      1 => 'field_communities',
      2 => 'field_culturalprotocol',
      3 => 'field_tags',
      4 => 'group_audience',
      5 => 'group_content_access',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '4. Mukurtu Core',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_mukurtu_core|node|digital_heritage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|taxonomy_term|category|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_advanced',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|taxonomy_term|category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_traditional|node|digital_heritage|form';
  $field_group->group_name = 'group_traditional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_heritage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_column_first';
  $field_group->data = array(
    'label' => '2. Traditional Knowledge',
    'weight' => '4',
    'children' => array(
      0 => 'field_tk_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '2. Traditional Knowledge',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_traditional|node|digital_heritage|form'] = $field_group;

  return $export;
}
