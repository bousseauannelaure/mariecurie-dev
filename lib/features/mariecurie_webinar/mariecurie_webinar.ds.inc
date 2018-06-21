<?php
/**
 * @file
 * mariecurie_page.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function mariecurie_webinar_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|msc_speaker_component|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'msc_speaker_component';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_msc_picture',
      ),
      'right' => array(
        1 => 'field_msc_component_title',
        2 => 'field_msc_short_text',
      ),
    ),
    'fields' => array(
      'field_msc_picture' => 'left',
      'field_msc_component_title' => 'right',
      'field_msc_short_text' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|msc_speaker_component|default'] = $ds_layout;

  return $export;
}
