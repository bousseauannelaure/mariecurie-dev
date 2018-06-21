<?php
/**
 * @file
 * mariecurie_page.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mariecurie_page_user_default_roles() {
  $roles = array();

  // Exported role: msc_page.
  $roles['msc_page'] = (object) array(
    'name' => 'msc_page',
    'weight' => 10,
  );

  return $roles;
}
