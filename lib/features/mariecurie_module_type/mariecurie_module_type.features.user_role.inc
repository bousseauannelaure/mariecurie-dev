<?php
/**
 * @file
 * mariecurie_module_type.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mariecurie_module_type_user_default_roles() {
  $roles = array();

  // Exported role: msc_module.
  $roles['msc_module'] = (object) array(
    'name' => 'msc_module',
    'weight' => 9,
  );

  return $roles;
}
