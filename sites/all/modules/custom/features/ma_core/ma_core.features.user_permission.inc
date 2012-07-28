<?php
/**
 * @file
 * ma_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ma_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: access media backend.
  $permissions['access media backend'] = array(
    'name' => 'access media backend',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: access mollom statistics.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user contact forms.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: admin_display_suite.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_fields.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_view_modes.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer boxes.
  $permissions['administer boxes'] = array(
    'name' => 'administer boxes',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'Tribal Administrator',
      3 => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer contact forms.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: administer delta blocks.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer flags.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: administer google analytics.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'Tribal Administrator',
      3 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'Tribal Administrator',
      3 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer media folders.
  $permissions['administer media folders'] = array(
    'name' => 'administer media folders',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Site Administrator',
      3 => 'administrator',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer mini panels.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: administer modernizr.
  $permissions['administer modernizr'] = array(
    'name' => 'administer modernizr',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'modernizr',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer mollom.
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panel-nodes.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'Tribal Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'Tribal Administrator',
      3 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass mollom protection.
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: clear import_categories feeds.
  $permissions['clear import_categories feeds'] = array(
    'name' => 'clear import_categories feeds',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear import_communities feeds.
  $permissions['clear import_communities feeds'] = array(
    'name' => 'clear import_communities feeds',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear import_cultural_protocols feeds.
  $permissions['clear import_cultural_protocols feeds'] = array(
    'name' => 'clear import_cultural_protocols feeds',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: clear import_digital_heritage_metadata_xml feeds.
  $permissions['clear import_digital_heritage_metadata_xml feeds'] = array(
    'name' => 'clear import_digital_heritage_metadata_xml feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: clear import_users feeds.
  $permissions['clear import_users feeds'] = array(
    'name' => 'clear import_users feeds',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create ma_collection content.
  $permissions['create ma_collection content'] = array(
    'name' => 'create ma_collection content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create mini panels.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel content.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create panel-nodes.
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'Tribal Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ma_collection content.
  $permissions['delete any ma_collection content'] = array(
    'name' => 'delete any ma_collection content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel content.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any panel-nodes.
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ma_collection content.
  $permissions['delete own ma_collection content'] = array(
    'name' => 'delete own ma_collection content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel content.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own panel-nodes.
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 10.
  $permissions['delete terms in 10'] = array(
    'name' => 'delete terms in 10',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 11.
  $permissions['delete terms in 11'] = array(
    'name' => 'delete terms in 11',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 6.
  $permissions['delete terms in 6'] = array(
    'name' => 'delete terms in 6',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 8.
  $permissions['delete terms in 8'] = array(
    'name' => 'delete terms in 8',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 9.
  $permissions['delete terms in 9'] = array(
    'name' => 'delete terms in 9',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: download media.
  $permissions['download media'] = array(
    'name' => 'download media',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ma_collection content.
  $permissions['edit any ma_collection content'] = array(
    'name' => 'edit any ma_collection content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel content.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any panel-nodes.
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit boxes.
  $permissions['edit boxes'] = array(
    'name' => 'edit boxes',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'Tribal Administrator',
      3 => 'administrator',
    ),
    'module' => 'boxes',
  );

  // Exported permission: edit file.
  $permissions['edit file'] = array(
    'name' => 'edit file',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit node machine name.
  $permissions['edit node machine name'] = array(
    'name' => 'edit node machine name',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'defaultcontent',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own ma_collection content.
  $permissions['edit own ma_collection content'] = array(
    'name' => 'edit own ma_collection content',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel content.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own panel-nodes.
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: edit own tags.
  $permissions['edit own tags'] = array(
    'name' => 'edit own tags',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'authenticated user',
    ),
    'module' => 'community_tags',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 10.
  $permissions['edit terms in 10'] = array(
    'name' => 'edit terms in 10',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 11.
  $permissions['edit terms in 11'] = array(
    'name' => 'edit terms in 11',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 6.
  $permissions['edit terms in 6'] = array(
    'name' => 'edit terms in 6',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 8.
  $permissions['edit terms in 8'] = array(
    'name' => 'edit terms in 8',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 9.
  $permissions['edit terms in 9'] = array(
    'name' => 'edit terms in 9',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: filter media.
  $permissions['filter media'] = array(
    'name' => 'filter media',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: import import_categories feeds.
  $permissions['import import_categories feeds'] = array(
    'name' => 'import import_categories feeds',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import import_communities feeds.
  $permissions['import import_communities feeds'] = array(
    'name' => 'import import_communities feeds',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import import_cultural_protocols feeds.
  $permissions['import import_cultural_protocols feeds'] = array(
    'name' => 'import import_cultural_protocols feeds',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import import_digital_heritage_metadata_xml feeds.
  $permissions['import import_digital_heritage_metadata_xml feeds'] = array(
    'name' => 'import import_digital_heritage_metadata_xml feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import import_users feeds.
  $permissions['import import_users feeds'] = array(
    'name' => 'import import_users feeds',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: media grid view.
  $permissions['media grid view'] = array(
    'name' => 'media grid view',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: media list view.
  $permissions['media list view'] = array(
    'name' => 'media list view',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'authenticated user',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: preview media.
  $permissions['preview media'] = array(
    'name' => 'preview media',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: tag content.
  $permissions['tag content'] = array(
    'name' => 'tag content',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'authenticated user',
    ),
    'module' => 'community_tags',
  );

  // Exported permission: tamper import_categories.
  $permissions['tamper import_categories'] = array(
    'name' => 'tamper import_categories',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: tamper import_communities.
  $permissions['tamper import_communities'] = array(
    'name' => 'tamper import_communities',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: tamper import_cultural_protocols.
  $permissions['tamper import_cultural_protocols'] = array(
    'name' => 'tamper import_cultural_protocols',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: tamper import_digital_heritage_metadata_xml.
  $permissions['tamper import_digital_heritage_metadata_xml'] = array(
    'name' => 'tamper import_digital_heritage_metadata_xml',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: tamper import_users.
  $permissions['tamper import_users'] = array(
    'name' => 'tamper import_users',
    'roles' => array(
      0 => 'Librarian',
      1 => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: upload media.
  $permissions['upload media'] = array(
    'name' => 'upload media',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'Librarian',
      2 => 'Mukurtu Administrator',
      3 => 'Site Administrator',
      4 => 'Tribal Administrator',
      5 => 'administrator',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: use PHP for tracking visibility.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'Site Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format ds_code.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: view advanced help index.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view file.
  $permissions['view file'] = array(
    'name' => 'view file',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'anonymous user',
      6 => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Mukurtu Administrator',
      1 => 'Site Administrator',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'Site Administrator',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'system',
  );

  return $permissions;
}
