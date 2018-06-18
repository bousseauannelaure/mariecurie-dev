<?php
/**
 * @file
 * mariecurie_module_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mariecurie_module_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mariecurie_module_type_node_info() {
  $items = array(
    'msc_module' => array(
      'name' => t('Module'),
      'base' => 'node_content',
      'description' => t('Learning Sessions'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
