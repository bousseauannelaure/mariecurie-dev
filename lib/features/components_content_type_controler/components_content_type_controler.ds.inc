<?php
/**
 * @file
 * components_content_type_controler.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function components_content_type_controler_ds_field_settings_info() {
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
 * Implements hook_ds_custom_fields_info().
 */
function components_content_type_controler_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'see_results';
  $ds_field->label = 'See results';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'advpoll|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['see_results'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function components_content_type_controler_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|advpoll|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'advpoll';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'advpoll_choice',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'advpoll_choice' => 'ds_content',
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
  $export['node|advpoll|full'] = $ds_layout;

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
  $ds_layout->id = 'paragraphs_item|msc_slider_component|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'msc_slider_component';
  $ds_layout->view_mode = 'default';
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
  $export['paragraphs_item|msc_slider_component|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|msc_slider_component|full_width_1_col';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'msc_slider_component';
  $ds_layout->view_mode = 'full_width_1_col';
  $ds_layout->layout = 'ds_1col';
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
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|msc_slider_component|full_width_1_col'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|msc_slider_component|full_width_2_col';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'msc_slider_component';
  $ds_layout->view_mode = 'full_width_2_col';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_msc_back_img_component',
        1 => 'field_msc_component_title',
      ),
      'right' => array(
        2 => 'field_msc_short_text',
        3 => 'field_msc_free_link',
        4 => 'field_msc_slide_template',
      ),
    ),
    'fields' => array(
      'field_msc_back_img_component' => 'left',
      'field_msc_component_title' => 'left',
      'field_msc_short_text' => 'right',
      'field_msc_free_link' => 'right',
      'field_msc_slide_template' => 'right',
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
  $export['paragraphs_item|msc_slider_component|full_width_2_col'] = $ds_layout;

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
  $ds_layout->id = 'paragraphs_item|speakers_component|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'speakers_component';
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
  $export['paragraphs_item|speakers_component|default'] = $ds_layout;

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
  $ds_view_mode->view_mode = 'full_width_1_col';
  $ds_view_mode->label = 'Full Width 1 Col';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['full_width_1_col'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_width_2_col';
  $ds_view_mode->label = 'Full Width 2 Col';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['full_width_2_col'] = $ds_view_mode;

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
