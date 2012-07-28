<?php
/**
 * @file
 * ma_importexport_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ma_importexport_users_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'category_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Category Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Category Export';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'guid';
  $handler->display->display_options['fields']['guid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['guid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['guid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['guid']['empty'] = '[tid]';
  $handler->display->display_options['fields']['guid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['guid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['guid']['hide_alter_empty'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Term name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['description']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;
  /* Field: Taxonomy term: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = 'Term weight';
  $handler->display->display_options['fields']['weight']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['external'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['weight']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['weight']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['html'] = 0;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['weight']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['weight']['hide_empty'] = 0;
  $handler->display->display_options['fields']['weight']['empty_zero'] = 0;
  $handler->display->display_options['fields']['weight']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['weight']['format_plural'] = 0;
  /* Field: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['machine_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['machine_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['machine_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['machine_name']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['machine_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['machine_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['machine_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['machine_name']['hide_alter_empty'] = 1;
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Vocabulary name';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 1;
  /* Field: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['vid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['vid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['vid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['vid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['vid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['vid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['vid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['vid']['format_plural'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'category-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'category-export-csv';
  $translatables['category_export'] = array(
    t('Master'),
    t('Category Export'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Term ID'),
    t('.'),
    t(','),
    t('guid'),
    t('[tid]'),
    t('Term name'),
    t('Term description'),
    t('Term weight'),
    t('Machine name'),
    t('Vocabulary name'),
    t('Vocabulary ID'),
    t('Page'),
    t('Data export'),
  );
  $export['category_export'] = $view;

  $view = new view;
  $view->name = 'community_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'community_export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'community_export';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'guid';
  $handler->display->display_options['fields']['guid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['guid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['guid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['guid']['empty'] = '[nid]';
  $handler->display->display_options['fields']['guid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['guid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['guid']['hide_alter_empty'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Sharing Protocols */
  $handler->display->display_options['fields']['group_access']['id'] = 'group_access';
  $handler->display->display_options['fields']['group_access']['table'] = 'field_data_group_access';
  $handler->display->display_options['fields']['group_access']['field'] = 'group_access';
  $handler->display->display_options['fields']['group_access']['label'] = 'Sharing Protocols Display';
  $handler->display->display_options['fields']['group_access']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_access']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_access']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_access']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_access']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_access']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_access']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_access']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['group_access']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Media';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$node = node_load($row->nid);
$media_items = array();
foreach($node->field_media[\'und\'] as $media) {
$fid = $media[\'fid\'];
array_push($media_items, file_load($fid)->filename);
}
$output = implode(",", $media_items);
print $output;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Media Internet (Off)';
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$node = node_load($row->nid);
$media_items = array();
foreach($node->field_media[\'und\'] as $media) {
$fid = $media[\'fid\'];
$path = file_load($fid)->uri;
$path_root = explode(\'//\', $path);

if(!empty($path_root[0])){
switch($path_root[0]){

case \'oembed:\':
array_push($media_items, \'http://\' . $path_root[2]);
break;

}
}

}
$output = implode(",", $media_items);
print $output;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'exif';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Sharing Protocols */
  $handler->display->display_options['fields']['group_access_1']['id'] = 'group_access_1';
  $handler->display->display_options['fields']['group_access_1']['table'] = 'field_data_group_access';
  $handler->display->display_options['fields']['group_access_1']['field'] = 'group_access';
  $handler->display->display_options['fields']['group_access_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_access_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_access_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_access_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_access_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_access_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_access_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_access_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['group_access_1']['type'] = 'list_key';
  $handler->display->display_options['fields']['group_access_1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'community' => 'community',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'community-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'community-export-csv';
  $translatables['community_export'] = array(
    t('Master'),
    t('community_export'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('nid'),
    t('guid'),
    t('[nid]'),
    t('Title'),
    t('Sharing Protocols Display'),
    t('Body'),
    t('Media'),
    t('Media Internet (Off)'),
    t('uid'),
    t('Updated date'),
    t('Type'),
    t('Sharing Protocols'),
    t('Page'),
    t('Data export'),
  );
  $export['community_export'] = $view;

  $view = new view;
  $view->name = 'cultural_protocol_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cultural_protocol_export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'community_export';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'guid';
  $handler->display->display_options['fields']['guid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['guid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['guid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['guid']['empty'] = '[nid]';
  $handler->display->display_options['fields']['guid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['guid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['guid']['hide_alter_empty'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Sharing Protocols */
  $handler->display->display_options['fields']['group_access']['id'] = 'group_access';
  $handler->display->display_options['fields']['group_access']['table'] = 'field_data_group_access';
  $handler->display->display_options['fields']['group_access']['field'] = 'group_access';
  $handler->display->display_options['fields']['group_access']['label'] = 'Sharing Protocols Display';
  $handler->display->display_options['fields']['group_access']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_access']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_access']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_access']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_access']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_access']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_access']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_access']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_access']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['group_access']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Media';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$node = node_load($row->nid);
$media_items = array();
foreach($node->field_media[\'und\'] as $media) {
$fid = $media[\'fid\'];
array_push($media_items, file_load($fid)->filename);
}
$output = implode(",", $media_items);
print $output;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Media Internet (Off)';
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$node = node_load($row->nid);
$media_items = array();
foreach($node->field_media[\'und\'] as $media) {
$fid = $media[\'fid\'];
$path = file_load($fid)->uri;
$path_root = explode(\'//\', $path);

if(!empty($path_root[0])){
switch($path_root[0]){

case \'oembed:\':
array_push($media_items, \'http://\' . $path_root[2]);
break;

}
}

}
$output = implode(",", $media_items);
print $output;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'exif';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Sharing Protocols */
  $handler->display->display_options['fields']['group_access_1']['id'] = 'group_access_1';
  $handler->display->display_options['fields']['group_access_1']['table'] = 'field_data_group_access';
  $handler->display->display_options['fields']['group_access_1']['field'] = 'group_access';
  $handler->display->display_options['fields']['group_access_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_access_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_access_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_access_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_access_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_access_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_access_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_access_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_access_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['group_access_1']['type'] = 'list_key';
  $handler->display->display_options['fields']['group_access_1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cultural_protocol_group' => 'cultural_protocol_group',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'cultural-protocol-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'cultural-protocol-export-csv';
  $translatables['cultural_protocol_export'] = array(
    t('Master'),
    t('community_export'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('nid'),
    t('guid'),
    t('[nid]'),
    t('Title'),
    t('Body'),
    t('Sharing Protocols Display'),
    t('Media'),
    t('Media Internet (Off)'),
    t('uid'),
    t('Updated date'),
    t('Type'),
    t('Sharing Protocols'),
    t('Page'),
    t('Data export'),
  );
  $export['cultural_protocol_export'] = $view;

  $view = new view;
  $view->name = 'user_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'user_export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'user_export';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer permissions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Field: Affiliations and Cultural Protocols */
  $handler->display->display_options['fields']['group_audience']['id'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['table'] = 'field_data_group_audience';
  $handler->display->display_options['fields']['group_audience']['field'] = 'group_audience';
  $handler->display->display_options['fields']['group_audience']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group_audience']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group_audience']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['group_audience']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group_audience']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group_audience']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group_audience']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['group_audience']['click_sort_column'] = 'gid';
  $handler->display->display_options['fields']['group_audience']['group_rows'] = 1;
  $handler->display->display_options['fields']['group_audience']['delta_offset'] = '0';
  $handler->display->display_options['fields']['group_audience']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['group_audience']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['group_audience']['field_api_classes'] = 0;
  /* Field: Field: Community Affiliations */
  $handler->display->display_options['fields']['field_communities']['id'] = 'field_communities';
  $handler->display->display_options['fields']['field_communities']['table'] = 'field_data_field_communities';
  $handler->display->display_options['fields']['field_communities']['field'] = 'field_communities';
  $handler->display->display_options['fields']['field_communities']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_communities']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_communities']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_communities']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_communities']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_communities']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_communities']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_communities']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_communities']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_communities']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_communities']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_communities']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_communities']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_communities']['field_api_classes'] = 0;
  /* Field: Field: Cultural Protocols */
  $handler->display->display_options['fields']['field_culturalprotocol']['id'] = 'field_culturalprotocol';
  $handler->display->display_options['fields']['field_culturalprotocol']['table'] = 'field_data_field_culturalprotocol';
  $handler->display->display_options['fields']['field_culturalprotocol']['field'] = 'field_culturalprotocol';
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_culturalprotocol']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_culturalprotocol']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_culturalprotocol']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_culturalprotocol']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_culturalprotocol']['field_api_classes'] = 0;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Authentication module */
  $handler->display->display_options['fields']['module']['id'] = 'module';
  $handler->display->display_options['fields']['module']['table'] = 'authmap';
  $handler->display->display_options['fields']['module']['field'] = 'module';
  $handler->display->display_options['fields']['module']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['module']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['module']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['module']['alter']['external'] = 0;
  $handler->display->display_options['fields']['module']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['module']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['module']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['module']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['module']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['module']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['module']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['module']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['module']['alter']['html'] = 0;
  $handler->display->display_options['fields']['module']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['module']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['module']['hide_empty'] = 0;
  $handler->display->display_options['fields']['module']['empty_zero'] = 0;
  $handler->display->display_options['fields']['module']['hide_alter_empty'] = 1;
  /* Field: User: Authentication name */
  $handler->display->display_options['fields']['authname']['id'] = 'authname';
  $handler->display->display_options['fields']['authname']['table'] = 'authmap';
  $handler->display->display_options['fields']['authname']['field'] = 'authname';
  $handler->display->display_options['fields']['authname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['authname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['authname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['authname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['authname']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['authname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['authname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['authname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['authname']['hide_alter_empty'] = 1;
  /* Field: User: Authmap ID */
  $handler->display->display_options['fields']['aid']['id'] = 'aid';
  $handler->display->display_options['fields']['aid']['table'] = 'authmap';
  $handler->display->display_options['fields']['aid']['field'] = 'aid';
  $handler->display->display_options['fields']['aid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['aid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['aid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['aid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['aid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['aid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['aid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['aid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['aid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['aid']['format_plural'] = 0;
  /* Field: User: Cancel link */
  $handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['table'] = 'users';
  $handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['cancel_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['cancel_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['cancel_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['cancel_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['cancel_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['cancel_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['cancel_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['cancel_node']['hide_alter_empty'] = 1;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'exif';
  /* Field: User: Data */
  $handler->display->display_options['fields']['data']['id'] = 'data';
  $handler->display->display_options['fields']['data']['table'] = 'users';
  $handler->display->display_options['fields']['data']['field'] = 'data';
  $handler->display->display_options['fields']['data']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['data']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['data']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['data']['alter']['external'] = 0;
  $handler->display->display_options['fields']['data']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['data']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['data']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['data']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['data']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['data']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['data']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['data']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['data']['alter']['html'] = 0;
  $handler->display->display_options['fields']['data']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['data']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['data']['hide_empty'] = 0;
  $handler->display->display_options['fields']['data']['empty_zero'] = 0;
  $handler->display->display_options['fields']['data']['hide_alter_empty'] = 1;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: User: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'users';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['language']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['language']['link_to_user'] = 1;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['access']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['access']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['access']['alter']['external'] = 0;
  $handler->display->display_options['fields']['access']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['access']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['access']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['access']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['access']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['access']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['access']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['access']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['access']['alter']['html'] = 0;
  $handler->display->display_options['fields']['access']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['access']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['access']['hide_empty'] = 0;
  $handler->display->display_options['fields']['access']['empty_zero'] = 0;
  $handler->display->display_options['fields']['access']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['access']['date_format'] = 'exif';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['login']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['login']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['login']['alter']['external'] = 0;
  $handler->display->display_options['fields']['login']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['login']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['login']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['login']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['login']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['login']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['login']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['login']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['login']['alter']['html'] = 0;
  $handler->display->display_options['fields']['login']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['login']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['login']['hide_empty'] = 0;
  $handler->display->display_options['fields']['login']['empty_zero'] = 0;
  $handler->display->display_options['fields']['login']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['login']['date_format'] = 'exif';
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_user']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_user']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_user']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_user']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_user']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_user']['hide_alter_empty'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name_1']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name_1']['format_username'] = 1;
  /* Field: User: Permission */
  $handler->display->display_options['fields']['permission']['id'] = 'permission';
  $handler->display->display_options['fields']['permission']['table'] = 'role_permission';
  $handler->display->display_options['fields']['permission']['field'] = 'permission';
  $handler->display->display_options['fields']['permission']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['external'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['permission']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['permission']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['permission']['alter']['html'] = 0;
  $handler->display->display_options['fields']['permission']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['permission']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['permission']['hide_empty'] = 0;
  $handler->display->display_options['fields']['permission']['empty_zero'] = 0;
  $handler->display->display_options['fields']['permission']['hide_alter_empty'] = 1;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Field: User: Rendered User */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_user';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['rid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['rid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['rid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['rid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['rid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['rid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['rid']['hide_alter_empty'] = 1;
  /* Field: User: Signature */
  $handler->display->display_options['fields']['signature']['id'] = 'signature';
  $handler->display->display_options['fields']['signature']['table'] = 'users';
  $handler->display->display_options['fields']['signature']['field'] = 'signature';
  $handler->display->display_options['fields']['signature']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['external'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['signature']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['signature']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['signature']['alter']['html'] = 0;
  $handler->display->display_options['fields']['signature']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['signature']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['signature']['hide_empty'] = 0;
  $handler->display->display_options['fields']['signature']['empty_zero'] = 0;
  $handler->display->display_options['fields']['signature']['hide_alter_empty'] = 1;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Mukurtu_User_Export_%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'user-export-csv';
  $translatables['user_export'] = array(
    t('Master'),
    t('user_export'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Affiliations and Cultural Protocols'),
    t('Community Affiliations'),
    t('Cultural Protocols'),
    t('Active'),
    t('Authentication module'),
    t('Authentication name'),
    t('Authmap ID'),
    t('.'),
    t(','),
    t('Cancel link'),
    t('Created date'),
    t('Data'),
    t('E-mail'),
    t('Edit link'),
    t('Language'),
    t('Last access'),
    t('Last login'),
    t('Link'),
    t('Name'),
    t('Permission'),
    t('Picture'),
    t('Rendered User'),
    t('Roles'),
    t('Signature'),
    t('Uid'),
    t('Page'),
    t('Data export'),
  );
  $export['user_export'] = $view;

  return $export;
}
