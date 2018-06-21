<?php
/**
 * @file
 * mariecurie_poll.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mariecurie_poll_user_default_roles() {
  $roles = array();

  // Exported role: msc_poll.
  $roles['msc_poll'] = (object) array(
    'name' => 'msc_poll',
    'weight' => 12,
  );

  return $roles;
}
