<?php
/**
 * @file
 * mariecurie_page.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function mariecurie_page_ds_layout_settings_info() {
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
  $export['paragraphs_item|msc_container_component|msc_full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|msc_welcome_component|msc_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'msc_welcome_component';
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
  $export['paragraphs_item|msc_welcome_component|msc_full_width'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mariecurie_page_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'render_programmatically';
  $ds_view_mode->label = 'Render programmatically';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['render_programmatically'] = $ds_view_mode;

  return $export;
}
