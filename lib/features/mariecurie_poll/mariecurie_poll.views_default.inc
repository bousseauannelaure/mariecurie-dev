<?php
/**
 * @file
 * components_content_type_controler.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mariecurie_poll_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'polls';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'polls';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'polls';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'advpoll' => 'advpoll',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'polls';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Display results */
  $handler->display->display_options['fields']['advpoll_results']['id'] = 'advpoll_results';
  $handler->display->display_options['fields']['advpoll_results']['table'] = 'field_data_advpoll_results';
  $handler->display->display_options['fields']['advpoll_results']['field'] = 'advpoll_results';
  $handler->display->display_options['fields']['advpoll_results']['label'] = '';
  $handler->display->display_options['fields']['advpoll_results']['element_label_colon'] = FALSE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_msc_desc']['id'] = 'field_msc_desc';
  $handler->display->display_options['fields']['field_msc_desc']['table'] = 'field_data_field_msc_desc';
  $handler->display->display_options['fields']['field_msc_desc']['field'] = 'field_msc_desc';
  $handler->display->display_options['fields']['field_msc_desc']['label'] = '';
  $handler->display->display_options['fields']['field_msc_desc']['element_label_colon'] = FALSE;
  /* Field: Content: Voting options */
  $handler->display->display_options['fields']['advpoll_options']['id'] = 'advpoll_options';
  $handler->display->display_options['fields']['advpoll_options']['table'] = 'field_data_advpoll_options';
  $handler->display->display_options['fields']['advpoll_options']['field'] = 'advpoll_options';
  $handler->display->display_options['fields']['advpoll_options']['delta_offset'] = '0';
  /* Field: Content: Voting options (advpoll_options:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_advpoll_options';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'advpoll_choice',
      'rendered' => TRUE,
      'rendered_strip' => FALSE,
    ),
  );
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = '';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'delta' => 'delta',
    'advpoll_choice' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'advpoll_choice' => '#2f7ed8',
    'delta' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'chart test';
  $handler->display->display_options['style_options']['data_labels'] = 'TRUE';
  $handler->display->display_options['style_options']['tooltips'] = 'TRUE';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Poll choice */
  $handler->display->display_options['fields']['advpoll_choice']['id'] = 'advpoll_choice';
  $handler->display->display_options['fields']['advpoll_choice']['table'] = 'field_data_advpoll_choice';
  $handler->display->display_options['fields']['advpoll_choice']['field'] = 'advpoll_choice';
  $handler->display->display_options['fields']['advpoll_choice']['label'] = '';
  $handler->display->display_options['fields']['advpoll_choice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['advpoll_choice']['click_sort_column'] = 'choice_id';
  $handler->display->display_options['fields']['advpoll_choice']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['advpoll_choice']['group_columns'] = array(
    'entity_id' => 'entity_id',
  );
  $handler->display->display_options['fields']['advpoll_choice']['delta_offset'] = '0';
  /* Field: Content: Voting options (advpoll_options:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_advpoll_options';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['group_type'] = 'count';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'advpoll' => 'advpoll',
  );
  $export['polls'] = $view;

  return $export;
}
