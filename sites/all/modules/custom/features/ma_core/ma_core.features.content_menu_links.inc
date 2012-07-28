<?php
/**
 * @file
 * ma_core.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function ma_core_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:admin/people/create
  $menu_links['main-menu:admin/people/create'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'User',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'mukurtu-actions',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:admin/structure/taxonomy/category/add
  $menu_links['main-menu:admin/structure/taxonomy/category/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/category/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Category',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a term to the existing taxonomy "category"',
        'class' => array(
          0 => 'mukurtu-actions',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('User');


  return $menu_links;
}
