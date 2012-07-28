<?php
/**
 * @file
 * ma_my_collections.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ma_my_collections_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:my-collection
  $menu_links['main-menu:my-collection'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-collection',
    'router_path' => 'my-collection',
    'link_title' => 'My Collection',
    'options' => array(
      'attributes' => array(
        'title' => 'View your collection of digital heritage items',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Collection');


  return $menu_links;
}
