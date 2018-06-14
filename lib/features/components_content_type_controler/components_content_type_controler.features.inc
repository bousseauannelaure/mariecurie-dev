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
 * Implements hook_image_default_styles().
 */
function components_content_type_controler_image_default_styles() {
  $styles = array();

  // Exported image style: 552x335.
  $styles['552x335'] = array(
    'label' => '552x335',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 552,
          'height' => 335,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
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
    'msc_article' => array(
      'name' => t('MSC Article'),
      'base' => 'node_content',
      'description' => t('Marie Curie Article - used as BLOG entry'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'msc_events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('Events for mariecurie'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'msc_module' => array(
      'name' => t('Module'),
      'base' => 'node_content',
      'description' => t('Learning Sessions'),
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

/**
 * Implements hook_paragraphs_info().
 */
function components_content_type_controler_paragraphs_info() {
  $items = array(
    'msc_commu_container_component' => array(
      'name' => 'Communities Container Component',
      'bundle' => 'msc_commu_container_component',
      'locked' => '1',
    ),
    'msc_communities_component' => array(
      'name' => 'Communities Component',
      'bundle' => 'msc_communities_component',
      'locked' => '1',
    ),
    'msc_container_component' => array(
      'name' => 'Container Component',
      'bundle' => 'msc_container_component',
      'locked' => '1',
    ),
    'msc_form_component' => array(
      'name' => 'Form component',
      'bundle' => 'msc_form_component',
      'locked' => '1',
    ),
    'msc_list_component' => array(
      'name' => 'List elements',
      'bundle' => 'msc_list_component',
      'locked' => '1',
    ),
    'msc_module_component' => array(
      'name' => 'Module Component',
      'bundle' => 'msc_module_component',
      'locked' => '1',
    ),
    'msc_module_container_component' => array(
      'name' => 'Modules Container Component',
      'bundle' => 'msc_module_container_component',
      'locked' => '1',
    ),
    'msc_numbers_component' => array(
      'name' => 'Numbers Component',
      'bundle' => 'msc_numbers_component',
      'locked' => '1',
    ),
    'msc_numbers_container_component' => array(
      'name' => 'Numbers Container Component',
      'bundle' => 'msc_numbers_container_component',
      'locked' => '1',
    ),
    'msc_slider_component' => array(
      'name' => 'Slide component',
      'bundle' => 'msc_slider_component',
      'locked' => '1',
    ),
    'speakers_component' => array(
      'name' => 'Speakers component',
      'bundle' => 'speakers_component',
      'locked' => '1',
    ),
    'video_component' => array(
      'name' => 'Welcome component',
      'bundle' => 'video_component',
      'locked' => '1',
    ),
  );
  return $items;
}
