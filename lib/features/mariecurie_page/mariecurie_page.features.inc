<?php
/**
 * @file
 * mariecurie_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mariecurie_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mariecurie_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function mariecurie_page_image_default_styles() {
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
function mariecurie_page_node_info() {
  $items = array(
    'msc_page' => array(
      'name' => t('Marie Curie Page'),
      'base' => 'node_content',
      'description' => t('Marie Curie Page'),
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
function mariecurie_page_paragraphs_info() {
  $items = array(
    'msc_commu_container_component' => array(
      'name' => 'Communities Container Component',
      'bundle' => 'msc_commu_container_component',
      'locked' => '1',
    ),
    'msc_community_component' => array(
      'name' => 'Communities Component',
      'bundle' => 'msc_community_component',
      'locked' => '1',
    ),
    'msc_container_component' => array(
      'name' => 'Container Component',
      'bundle' => 'msc_container_component',
      'locked' => '1',
    ),
    'msc_form_component' => array(
      'name' => 'Form Component',
      'bundle' => 'msc_form_component',
      'locked' => '1',
    ),
    'msc_list_elements_component' => array(
      'name' => 'List Elements Component',
      'bundle' => 'msc_list_elements_component',
      'locked' => '1',
    ),
    'msc_module_component' => array(
      'name' => 'Module Component',
      'bundle' => 'msc_module_component',
      'locked' => '1',
    ),
    'msc_modules_container_component' => array(
      'name' => 'Modules Container Component',
      'bundle' => 'msc_modules_container_component',
      'locked' => '1',
    ),
    'msc_number_component' => array(
      'name' => 'Numbers Component',
      'bundle' => 'msc_number_component',
      'locked' => '1',
    ),
    'msc_numbers_container_component' => array(
      'name' => 'Numbers Container Component',
      'bundle' => 'msc_numbers_container_component',
      'locked' => '1',
    ),
    'msc_slide_component' => array(
      'name' => 'Slide Component',
      'bundle' => 'msc_slide_component',
      'locked' => '1',
    ),
    'msc_welcome_component' => array(
      'name' => 'Welcome Component',
      'bundle' => 'msc_welcome_component',
      'locked' => '1',
    ),
  );
  return $items;
}
