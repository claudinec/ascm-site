<?php
/**
 * @file
 * ascm_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ascm_admin_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 3,
  );

  return $roles;
}
