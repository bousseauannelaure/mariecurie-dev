<?php
/**
 * @file
 * mariecurie_global_configuration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mariecurie_global_configuration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related';
  $view->description = 'Related Content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'related';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'related';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Section (field_msc_section_ref) */
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['id'] = 'field_msc_section_ref_tid';
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['table'] = 'field_data_field_msc_section_ref';
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['field'] = 'field_msc_section_ref_tid';
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['default_argument_options']['vocabularies'] = array(
    'section' => 'section',
  );
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_msc_section_ref_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Related Block */
  $handler = $view->new_display('block', 'Related Block', 'block');
  $handler->display->display_options['display_description'] = 'Related Content Block';

  /* Display: Short Related Block */
  $handler = $view->new_display('block', 'Short Related Block', 'block_1');
  $handler->display->display_options['display_description'] = 'Related Content Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['related'] = $view;

  return $export;
}
