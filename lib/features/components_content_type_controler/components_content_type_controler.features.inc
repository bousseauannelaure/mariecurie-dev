<?php
/**
 * @file
 * components_content_type_controler.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function components_content_type_controler_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function components_content_type_controler_node_info() {
  $items = array(
    'msc_article' => array(
      'name' => t('MSC Article'),
      'base' => 'node_content',
      'description' => t('Marie Curie Article - used as BLOG entry'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'msc_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Marie curie News'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'msc_page' => array(
      'name' => t('MSC Page'),
      'base' => 'node_content',
      'description' => t('Marie Curie Page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'msc_podcast' => array(
      'name' => t('Podcast'),
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
