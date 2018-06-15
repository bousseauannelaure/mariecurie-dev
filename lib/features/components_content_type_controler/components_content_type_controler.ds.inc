<?php
/**
 * @file
 * components_content_type_controler.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function components_content_type_controler_ds_view_modes_info() {
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
