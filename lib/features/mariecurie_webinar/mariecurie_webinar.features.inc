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
 * Implements hook_fe_date_custom_date_formats().
 */
function mariecurie_webinar_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['U'] = 'U';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function mariecurie_webinar_date_format_types() {
  $format_types = array();
  // Exported date format type: timestamp
  $format_types['timestamp'] = 'Timestamp';
  return $format_types;
}

/**
 * Implements hook_node_info().
 */
function mariecurie_webinar_node_info() {
  $items = array(
    'msc_webinar' => array(
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
