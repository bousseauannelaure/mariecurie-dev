<?php
/**
 * @file
 * mariecurie_events.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mariecurie_events_user_default_roles() {
  $roles = array();

  // Exported role: msc_event.
  $roles['msc_event'] = (object) array(
    'name' => 'msc_event',
    'weight' => 8,
  );

  return $roles;
}
