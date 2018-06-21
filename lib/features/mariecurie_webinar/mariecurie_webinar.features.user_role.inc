<?php
/**
 * @file
 * mariecurie_webinar.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mariecurie_webinar_user_default_roles() {
  $roles = array();

  // Exported role: msc_webinar.
  $roles['msc_webinar'] = (object) array(
    'name' => 'msc_webinar',
    'weight' => 13,
  );

  return $roles;
}
