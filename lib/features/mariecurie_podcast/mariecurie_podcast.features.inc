<?php
/**
 * @file
 * mariecurie_podcast.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mariecurie_podcast_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mariecurie_podcast_node_info() {
  $items = array(
    'msc_podcast' => array(
      'name' => t('Marie Curie Podcast'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
