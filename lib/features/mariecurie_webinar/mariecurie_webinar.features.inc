<?php
/**
 * @file
 * mariecurie_webinar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mariecurie_webinar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mariecurie_webinar_node_info() {
  $items = array(
    'webinar' => array(
      'name' => t('Marie Curie Webinar'),
      'base' => 'node_content',
      'description' => t('Marie Curie Webinar element'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
