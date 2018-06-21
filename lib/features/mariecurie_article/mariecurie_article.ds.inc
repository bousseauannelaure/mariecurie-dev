<?php
/**
 * @file
 * mariecurie_article.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mariecurie_article_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|msc_article|promoted_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'msc_article';
  $ds_fieldsetting->view_mode = 'promoted_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|msc_article|promoted_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|msc_article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'msc_article';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|msc_article|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mariecurie_article_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|msc_article|promoted_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'msc_article';
  $ds_layout->view_mode = 'promoted_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_msc_picture',
        1 => 'title',
        2 => 'field_msc_publishing_date',
        3 => 'field_msc_desc',
        4 => 'field_msc_free_link',
      ),
    ),
    'fields' => array(
      'field_msc_picture' => 'ds_content',
      'title' => 'ds_content',
      'field_msc_publishing_date' => 'ds_content',
      'field_msc_desc' => 'ds_content',
      'field_msc_free_link' => 'ds_content',
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
  $export['node|msc_article|promoted_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|msc_article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'msc_article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_msc_picture',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_msc_publishing_date',
        3 => 'field_msc_desc',
        4 => 'field_msc_free_link',
      ),
    ),
    'fields' => array(
      'field_msc_picture' => 'left',
      'title' => 'right',
      'field_msc_publishing_date' => 'right',
      'field_msc_desc' => 'right',
      'field_msc_free_link' => 'right',
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
  $export['node|msc_article|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mariecurie_article_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'promoted_teaser';
  $ds_view_mode->label = 'Promoted teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['promoted_teaser'] = $ds_view_mode;

  return $export;
}
