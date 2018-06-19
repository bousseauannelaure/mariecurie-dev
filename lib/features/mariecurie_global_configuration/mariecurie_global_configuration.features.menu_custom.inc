<?php
/**
 * @file
 * mariecurie_global_configuration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mariecurie_global_configuration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-left-footer-menu.
  $menus['menu-left-footer-menu'] = array(
    'menu_name' => 'menu-left-footer-menu',
    'title' => 'Left footer menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-middle-footer-menu.
  $menus['menu-middle-footer-menu'] = array(
    'menu_name' => 'menu-middle-footer-menu',
    'title' => 'Middle footer menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-right-footer-menu.
  $menus['menu-right-footer-menu'] = array(
    'menu_name' => 'menu-right-footer-menu',
    'title' => 'Right footer menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Left footer menu');
  t('Middle footer menu');
  t('Right footer menu');

  return $menus;
}
