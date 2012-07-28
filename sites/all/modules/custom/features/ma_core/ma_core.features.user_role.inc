<?php
/**
 * @file
 * ma_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ma_core_user_default_roles() {
  $roles = array();

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => '5',
  );

  // Exported role: Librarian.
  $roles['Librarian'] = array(
    'name' => 'Librarian',
    'weight' => '2',
  );

  // Exported role: Mukurtu Administrator.
  $roles['Mukurtu Administrator'] = array(
    'name' => 'Mukurtu Administrator',
    'weight' => '3',
  );

  // Exported role: Site Administrator.
  $roles['Site Administrator'] = array(
    'name' => 'Site Administrator',
    'weight' => '4',
  );

  // Exported role: Tribal Administrator.
  $roles['Tribal Administrator'] = array(
    'name' => 'Tribal Administrator',
    'weight' => '3',
  );

  return $roles;
}
