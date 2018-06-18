<?php
/**
 * @file
 * mariecurie_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mariecurie_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mariecurie_events_node_info() {
  $items = array(
    'msc_events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('Events for mariecurie'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
