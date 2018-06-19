<?php
/**
 * @file
 * components_content_type_controler.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function components_content_type_controler_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function components_content_type_controler_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function components_content_type_controler_node_info() {
  $items = array(
    'advpoll' => array(
      'name' => t('Advanced poll'),
      'base' => 'node_content',
      'description' => t('Advanced poll adds additional poll functionality, cookie voting, write-ins and voting modes.'),
      'has_title' => '1',
      'title_label' => t('Question'),
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
    'msc_podcast' => array(
      'name' => t('Podcast'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webinar' => array(
      'name' => t('Webinar'),
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
