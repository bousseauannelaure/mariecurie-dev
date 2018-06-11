<?php
/**
 * @file
 * components_content_type_controler.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function components_content_type_controler_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|msc_container_component|msc_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'msc_container_component';
  $ds_layout->view_mode = 'msc_full_width';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_msc_component_title',
        1 => 'field_msc_short_text',
        2 => 'field_msc_multiple_component',
      ),
    ),
    'fields' => array(
      'field_msc_component_title' => 'ds_content',
      'field_msc_short_text' => 'ds_content',
      'field_msc_multiple_component' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|msc_container_component|msc_full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|msc_module_component|msc_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'msc_module_component';
  $ds_layout->view_mode = 'msc_full_width';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_msc_back_img_component',
        1 => 'field_msc_component_title',
        2 => 'field_msc_short_text',
      ),
    ),
    'fields' => array(
      'field_msc_back_img_component' => 'ds_content',
      'field_msc_component_title' => 'ds_content',
      'field_msc_short_text' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|msc_module_component|msc_full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|msc_numbers_component|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'msc_numbers_component';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_msc_phrase_text',
        1 => 'field_msc_component_title',
      ),
    ),
    'fields' => array(
      'field_msc_phrase_text' => 'ds_content',
      'field_msc_component_title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|msc_numbers_component|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|msc_slider_component|msc_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'msc_slider_component';
  $ds_layout->view_mode = 'msc_full_width';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_msc_back_img_component',
        1 => 'field_msc_component_title',
        2 => 'field_msc_short_text',
        3 => 'field_msc_free_link',
      ),
    ),
    'fields' => array(
      'field_msc_back_img_component' => 'ds_content',
      'field_msc_component_title' => 'ds_content',
      'field_msc_short_text' => 'ds_content',
      'field_msc_free_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'tokens',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|msc_slider_component|msc_full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|video_component|msc_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'video_component';
  $ds_layout->view_mode = 'msc_full_width';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_msc_component_title',
      ),
      'left' => array(
        1 => 'field_msc_desc',
      ),
      'right' => array(
        2 => 'field_msc_video',
      ),
    ),
    'fields' => array(
      'field_msc_component_title' => 'header',
      'field_msc_desc' => 'left',
      'field_msc_video' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|video_component|msc_full_width'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function components_content_type_controler_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'msc_full_width';
  $ds_view_mode->label = 'Full Width Components';
  $ds_view_mode->entities = array(
    'comment' => 'comment',
    'node' => 'node',
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['msc_full_width'] = $ds_view_mode;

  return $export;
}
