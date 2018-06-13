<?php
/**
 * @file
 * components_content_type_controler.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function components_content_type_controler_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'vote on polls'.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'cem' => 'cem',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'advpoll',
  );

  return $permissions;
}
