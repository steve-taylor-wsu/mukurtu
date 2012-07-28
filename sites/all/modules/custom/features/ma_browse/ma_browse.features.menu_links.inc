<?php
/**
 * @file
 * ma_browse.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ma_browse_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:browse
  $menu_links['main-menu:browse'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'browse',
    'router_path' => 'browse',
    'link_title' => 'Browse Archive',
    'options' => array(
      'attributes' => array(
        'title' => 'Browse through the mukurtu demo archive',
        'class' => array(
          0 => 'browse',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse Archive');


  return $menu_links;
}
