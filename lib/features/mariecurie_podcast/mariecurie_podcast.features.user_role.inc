<?php
/**
 * @file
 * mariecurie_podcast.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mariecurie_podcast_user_default_roles() {
  $roles = array();

  // Exported role: msc_podcast.
  $roles['msc_podcast'] = (object) array(
    'name' => 'msc_podcast',
    'weight' => 11,
  );

  return $roles;
}
