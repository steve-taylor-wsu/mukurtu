<?php
/**
 * @file
 * ma_inputformats.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ma_inputformats_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
