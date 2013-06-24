<?php
/**
 * @file
 * community_knowledge_relation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function community_knowledge_relation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'community_knowledge_relation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Community Knowledge Relation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Community Knowledge';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'relation';
  /* Relationship: Content: Tribal Catalog record (field_tribal_knowledge_relation) */
  $handler->display->display_options['relationships']['field_tribal_knowledge_relation_nid']['id'] = 'field_tribal_knowledge_relation_nid';
  $handler->display->display_options['relationships']['field_tribal_knowledge_relation_nid']['table'] = 'field_data_field_tribal_knowledge_relation';
  $handler->display->display_options['relationships']['field_tribal_knowledge_relation_nid']['field'] = 'field_tribal_knowledge_relation_nid';
  $handler->display->display_options['relationships']['field_tribal_knowledge_relation_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_tribal_knowledge_relation_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  /* Field: Content: Traditional Knowledge */
  $handler->display->display_options['fields']['field_tk_body']['id'] = 'field_tk_body';
  $handler->display->display_options['fields']['field_tk_body']['table'] = 'field_data_field_tk_body';
  $handler->display->display_options['fields']['field_tk_body']['field'] = 'field_tk_body';
  /* Sort criterion: Field: Community Affiliations (field_communities) */
  $handler->display->display_options['sorts']['field_communities_nid']['id'] = 'field_communities_nid';
  $handler->display->display_options['sorts']['field_communities_nid']['table'] = 'field_data_field_communities';
  $handler->display->display_options['sorts']['field_communities_nid']['field'] = 'field_communities_nid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_tribal_knowledge_relation_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'digital_heritage' => 'digital_heritage',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['community_knowledge_relation'] = array(
    t('Master'),
    t('Community Knowledge'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_tribal_knowledge_relation'),
    t('Body'),
    t('Traditional Knowledge'),
    t('All'),
    t('Block'),
  );
  $export['community_knowledge_relation'] = $view;

  return $export;
}
