<?php
/**
 * @file
 * ma_digitalheritage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ma_digitalheritage_user_default_permissions() {
  $permissions = array();

  // Exported permission: create digital_heritage content.
  $permissions['create digital_heritage content'] = array(
    'name' => 'create digital_heritage content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any digital_heritage content.
  $permissions['delete any digital_heritage content'] = array(
    'name' => 'delete any digital_heritage content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own digital_heritage content.
  $permissions['delete own digital_heritage content'] = array(
    'name' => 'delete own digital_heritage content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any digital_heritage content.
  $permissions['edit any digital_heritage content'] = array(
    'name' => 'edit any digital_heritage content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own digital_heritage content.
  $permissions['edit own digital_heritage content'] = array(
    'name' => 'edit own digital_heritage content',
    'roles' => array(
      0 => 'Librarian',
      1 => 'Mukurtu Administrator',
      2 => 'Site Administrator',
      3 => 'Tribal Administrator',
      4 => 'administrator',
      5 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
