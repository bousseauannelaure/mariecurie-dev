<?php
/**
 * @file
 * mariecurie_article.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mariecurie_article_user_default_roles() {
  $roles = array();

  // Exported role: msc_article.
  $roles['msc_article'] = (object) array(
    'name' => 'msc_article',
    'weight' => 7,
  );

  return $roles;
}
