<?php
/**
 * @file
 * ma_community_manage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ma_community_manage_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'communities';
  $view->description = 'Show active groups that are nodes';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'Communities';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Groups list';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'grid-2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Test Group: Node group */
  $handler->display->display_options['relationships']['og_rel']['id'] = 'og_rel';
  $handler->display->display_options['relationships']['og_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_rel']['field'] = 'og_rel';
  $handler->display->display_options['relationships']['og_rel']['required'] = 0;
  /* Field: Content: Node field */
  $handler->display->display_options['fields']['nodefield']['id'] = 'nodefield';
  $handler->display->display_options['fields']['nodefield']['table'] = 'node';
  $handler->display->display_options['fields']['nodefield']['field'] = 'nodefield';
  $handler->display->display_options['fields']['nodefield']['label'] = '';
  $handler->display->display_options['fields']['nodefield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nodefield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nodefield']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nodefield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nodefield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nodefield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nodefield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nodefield']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nodefield']['build_mode'] = 'browse_teaser';
  $handler->display->display_options['fields']['nodefield']['links'] = 0;
  $handler->display->display_options['fields']['nodefield']['comments'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Organic groups group: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Group: Group\'s state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'community' => 'community',
    'cultural_protocol_group' => 'cultural_protocol_group',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'community' => 'community',
    'cultural_protocol_group' => 'cultural_protocol_group',
  );
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['reduce'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'group-list';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'group-list/feed';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );

  /* Display: Communities */
  $handler = $view->new_display('page', 'Communities', 'page_communities');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Communities';
  $handler->display->display_options['display_description'] = 'Community-based groups';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Node field */
  $handler->display->display_options['fields']['nodefield']['id'] = 'nodefield';
  $handler->display->display_options['fields']['nodefield']['table'] = 'node';
  $handler->display->display_options['fields']['nodefield']['field'] = 'nodefield';
  $handler->display->display_options['fields']['nodefield']['label'] = '';
  $handler->display->display_options['fields']['nodefield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nodefield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nodefield']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nodefield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nodefield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nodefield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nodefield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nodefield']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nodefield']['build_mode'] = 'browse_teaser';
  $handler->display->display_options['fields']['nodefield']['links'] = 0;
  $handler->display->display_options['fields']['nodefield']['comments'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Organic groups group: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Group: Group\'s state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'community' => 'community',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'communities';

  /* Display: Cultural Protocols */
  $handler = $view->new_display('page', 'Cultural Protocols', 'page_cultural_protocols');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Cultural Protocols';
  $handler->display->display_options['display_description'] = 'Cultural Protocol-based groups';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Organic groups group: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Group: Group\'s state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cultural_protocol_group' => 'cultural_protocol_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'cultural-protocols';

  /* Display: Group IDs */
  $handler = $view->new_display('page', 'Group IDs', 'page_2');
  $handler->display->display_options['path'] = 'group-list/ids';
  $translatables['communities'] = array(
    t('Defaults'),
    t('Groups list'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('group'),
    t('Group: Group\'s state'),
    t('Type'),
    t('Page'),
    t('Feed'),
    t('Communities'),
    t('Community-based groups'),
    t('Cultural Protocols'),
    t('Cultural Protocol-based groups'),
    t('Group IDs'),
  );
  $export['communities'] = $view;

  $view = new view;
  $view->name = 'communities_content';
  $view->description = 'Show all content (nodes) of a group.';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'communities_content';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'grid-2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no content in this group.';
  /* Relationship: Group membership: Node group membership */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Node field */
  $handler->display->display_options['fields']['nodefield']['id'] = 'nodefield';
  $handler->display->display_options['fields']['nodefield']['table'] = 'node';
  $handler->display->display_options['fields']['nodefield']['field'] = 'nodefield';
  $handler->display->display_options['fields']['nodefield']['label'] = '';
  $handler->display->display_options['fields']['nodefield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nodefield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nodefield']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nodefield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nodefield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nodefield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nodefield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nodefield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nodefield']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nodefield']['build_mode'] = 'browse_teaser';
  $handler->display->display_options['fields']['nodefield']['links'] = 0;
  $handler->display->display_options['fields']['nodefield']['comments'] = 0;
  /* Field: OG membership: Group gid */
  $handler->display->display_options['fields']['group']['id'] = 'group';
  $handler->display->display_options['fields']['group']['table'] = 'og_membership';
  $handler->display->display_options['fields']['group']['field'] = 'group';
  $handler->display->display_options['fields']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['group']['label'] = '';
  $handler->display->display_options['fields']['group']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['group']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['group']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['group']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['group']['format_plural'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group gid */
  $handler->display->display_options['arguments']['group']['id'] = 'group';
  $handler->display->display_options['arguments']['group']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['group']['field'] = 'group';
  $handler->display->display_options['arguments']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['group']['default_action'] = 'default';
  $handler->display->display_options['arguments']['group']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['group']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['group']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['group']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['group']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['group']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['communities_content'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('There is no content in this group.'),
    t('group membership'),
    t('.'),
    t(','),
    t('All'),
    t('Content pane'),
    t('Block'),
  );
  $export['communities_content'] = $view;

  $view = new view;
  $view->name = 'communities_members';
  $view->description = 'Newest group members.';
  $view->tag = 'og';
  $view->base_table = 'users';
  $view->human_name = 'communities_members';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['empty'] = FALSE;
  $handler->display->display_options['footer']['result']['content'] = 'Displaying @start - @end of @total group members.';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = FALSE;
  $handler->display->display_options['footer']['php']['php_output'] = '<h4>Join this group</h4>
<?php global $user;?>
<p>To join this group, <a href="/user/<?php print $user->uid?>/edit?gid=<?php print $view->args[0]; ?>">add this group</a> to your list of groups on your account page.</p>
';
  /* Relationship: Group membership: User group membership */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: OG membership: Entity id */
  $handler->display->display_options['fields']['etid']['id'] = 'etid';
  $handler->display->display_options['fields']['etid']['table'] = 'og_membership';
  $handler->display->display_options['fields']['etid']['field'] = 'etid';
  $handler->display->display_options['fields']['etid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['etid']['label'] = '';
  $handler->display->display_options['fields']['etid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['etid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['etid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['etid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['etid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['etid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['etid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['etid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['etid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['etid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['etid']['format_plural'] = 0;
  /* Field: OG membership: Group gid */
  $handler->display->display_options['fields']['group']['id'] = 'group';
  $handler->display->display_options['fields']['group']['table'] = 'og_membership';
  $handler->display->display_options['fields']['group']['field'] = 'group';
  $handler->display->display_options['fields']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['group']['label'] = '';
  $handler->display->display_options['fields']['group']['exclude'] = TRUE;
  $handler->display->display_options['fields']['group']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['group']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['group']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['group']['alter']['external'] = 0;
  $handler->display->display_options['fields']['group']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['group']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['group']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['group']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['group']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['group']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['group']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['group']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['group']['alter']['html'] = 0;
  $handler->display->display_options['fields']['group']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['group']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['group']['hide_empty'] = 0;
  $handler->display->display_options['fields']['group']['empty_zero'] = 0;
  $handler->display->display_options['fields']['group']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['group']['format_plural'] = 0;
  /* Sort criterion: OG membership: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group gid */
  $handler->display->display_options['arguments']['group']['id'] = 'group';
  $handler->display->display_options['arguments']['group']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['group']['field'] = 'group';
  $handler->display->display_options['arguments']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['group']['default_action'] = 'default';
  $handler->display->display_options['arguments']['group']['title_enable'] = 1;
  $handler->display->display_options['arguments']['group']['title'] = '%1 group members';
  $handler->display->display_options['arguments']['group']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['group']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['group']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['group']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['communities_members'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Displaying @start - @end of @total group members.'),
    t('group membership'),
    t('.'),
    t(','),
    t('All'),
    t('%1 group members'),
    t('Block'),
    t('Content pane'),
  );
  $export['communities_members'] = $view;

  return $export;
}
