<?php
/**
 * @file
 * mariecurie_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mariecurie_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mariecurie_article_node_info() {
  $items = array(
    'msc_article' => array(
      'name' => t('MSC Article'),
      'base' => 'node_content',
      'description' => t('Marie Curie Article - used as BLOG entry'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
