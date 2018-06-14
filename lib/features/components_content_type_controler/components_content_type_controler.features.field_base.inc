<?php
/**
 * @file
 * components_content_type_controler.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function components_content_type_controler_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'advpoll_behavior'.
  $field_bases['advpoll_behavior'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'advpoll_behavior',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'approval' => 'Approval voting',
        'pool' => 'Pool votes and choices',
        'borda' => 'Borda count (Ranking Poll)',
        'runoff' => 'Instant-runoff (Ranking Poll)',
        'borda_all' => 'Borda count drag and drop (Ranking Poll)',
        'runoff_all' => 'Instant-runoff drag and drop (Ranking Poll)',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'advpoll_choice'.
  $field_bases['advpoll_choice'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'advpoll_choice',
    'indexes' => array(
      'choice' => array(),
    ),
    'locked' => 0,
    'module' => 'advpoll_field',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'advpoll',
  );

  // Exported field_base: 'advpoll_closed'.
  $field_bases['advpoll_closed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'advpoll_closed',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'close' => 'Close poll',
        'open' => 'Open poll',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'advpoll_cookie_duration'.
  $field_bases['advpoll_cookie_duration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'advpoll_cookie_duration',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'advpoll_dates'.
  $field_bases['advpoll_dates'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'advpoll_dates',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => 'required',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'advpoll_max_choices'.
  $field_bases['advpoll_max_choices'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'advpoll_max_choices',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'advpoll_mode'.
  $field_bases['advpoll_mode'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'advpoll_mode',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'normal' => 'Normal (handled by default Vote API settings)',
        'cookie' => 'By Cookie',
        'unlimited' => 'Unlimited (Allows those with permission to vote on polls to vote as many times as they wish. Write-ins are disabled).',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'advpoll_options'.
  $field_bases['advpoll_options'] = array(
    'active' => 1,
    'cardinality' => 4,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'advpoll_options',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'writein' => 'Allow users to cast write-in votes',
        'electoral' => 'Restrict voting to electoral list',
        'block' => 'Generate a block for this poll',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'advpoll_results'.
  $field_bases['advpoll_results'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'advpoll_results',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'aftervote' => 'After voting',
        'afterclose' => 'After poll is closed',
        'never' => 'Never',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_msc_back_img_component'.
  $field_bases['field_msc_back_img_component'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_back_img_component',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_msc_component_title'.
  $field_bases['field_msc_component_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_component_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_msc_components'.
  $field_bases['field_msc_components'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_components',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_msc_date'.
  $field_bases['field_msc_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => 'optional',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_msc_desc'.
  $field_bases['field_msc_desc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_desc',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_msc_display_component'.
  $field_bases['field_msc_display_component'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_display_component',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_msc_form_reference'.
  $field_bases['field_msc_form_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_form_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'webform' => 'webform',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_msc_free_link'.
  $field_bases['field_msc_free_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_free_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_msc_link_to_module'.
  $field_bases['field_msc_link_to_module'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_link_to_module',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_msc_list_reference'.
  $field_bases['field_msc_list_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_list_reference',
    'indexes' => array(
      'view_id' => array(
        0 => 'view_id',
      ),
    ),
    'locked' => 0,
    'module' => 'viewreference',
    'settings' => array(
      'append_id' => 1,
      'arguments' => array(
        'delimiter' => '/',
        'dsv_arguments' => 0,
        'label' => '!field_label arguments',
        'php_arguments' => 0,
        'rows' => 1,
      ),
      'entity_translation_sync' => FALSE,
      'referenceable_tags' => array(
        'allow' => '',
        'deny' => '',
      ),
      'referenceable_views' => array(
        'Blocked_accounts:default' => 0,
        'Blocked_accounts:page_1' => 0,
        'Maillog:default' => 0,
        'Maillog:page_1' => 0,
        'archive:block' => 0,
        'archive:default' => 0,
        'archive:page' => 0,
        'articles_section:block' => 'articles_section:block',
        'articles_section:block_1' => 'articles_section:block_1',
        'articles_section:default' => 0,
        'backlinks:block' => 0,
        'backlinks:default' => 0,
        'backlinks:page' => 0,
        'bean_blocks_overview:admin_page' => 0,
        'bean_blocks_overview:default' => 0,
        'blog:block_1' => 'blog:block_1',
        'blog:default' => 0,
        'blog:page_1' => 'blog:page_1',
        'charts_demo:column' => 0,
        'charts_demo:default' => 0,
        'charts_demo:page' => 0,
        'charts_demo:pie' => 0,
        'comments_recent:block' => 0,
        'comments_recent:default' => 0,
        'comments_recent:page' => 0,
        'core_content_administration:default' => 0,
        'core_content_administration:page' => 0,
        'events:block' => 'events:block',
        'events:default' => 0,
        'events:page' => 'events:page',
        'frontpage:default' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'glossary:attachment' => 0,
        'glossary:default' => 0,
        'glossary:page' => 0,
        'media_default:default' => 0,
        'media_default:media_browser_1' => 0,
        'media_default:media_browser_my_files' => 0,
        'multilingual_recent_translation_job_overview:default' => 0,
        'multilingual_recent_translation_job_overview:page' => 0,
        'multisite_settings_core:block_1' => 0,
        'multisite_settings_core:default' => 0,
        'nexteuropa_token_ckeditor_bean_filter_view:default' => 0,
        'nexteuropa_token_ckeditor_filter_view:default' => 0,
        'og_all_user_group_content:default' => 0,
        'og_members:block_1' => 0,
        'og_members:default' => 0,
        'og_members_admin:default' => 0,
        'og_nodes:default' => 0,
        'og_user_groups:default' => 0,
        'polls:block' => 0,
        'polls:block_1' => 0,
        'polls:default' => 0,
        'polls:page' => 'polls:page',
        'related:block' => 'related:block',
        'related:block_1' => 'related:block_1',
        'related:default' => 'related:default',
        'rules_scheduler:default' => 0,
        'taxonomy_browser_header:default' => 0,
        'taxonomy_browser_header:page' => 0,
        'taxonomy_term:default' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'tmgmt_local_manage_translate_task:assigned' => 0,
        'tmgmt_local_manage_translate_task:closed' => 0,
        'tmgmt_local_manage_translate_task:completed' => 0,
        'tmgmt_local_manage_translate_task:default' => 0,
        'tmgmt_local_manage_translate_task:pending' => 0,
        'tmgmt_local_manage_translate_task:rejected' => 0,
        'tmgmt_local_manage_translate_task:unassigned' => 0,
        'tmgmt_local_task_items:block' => 0,
        'tmgmt_local_task_items:default' => 0,
        'tmgmt_local_task_overview:closed' => 0,
        'tmgmt_local_task_overview:completed' => 0,
        'tmgmt_local_task_overview:default' => 0,
        'tmgmt_local_task_overview:eligible' => 0,
        'tmgmt_local_task_overview:my_tasks' => 0,
        'tmgmt_local_task_overview:pending' => 0,
        'tmgmt_local_task_overview:rejected' => 0,
        'tmgmt_local_task_overview:unassigned' => 0,
        'tmgmt_og_job_overview:default' => 0,
        'tmgmt_ui_job_item_messages:block' => 0,
        'tmgmt_ui_job_item_messages:default' => 0,
        'tmgmt_ui_job_items:block' => 0,
        'tmgmt_ui_job_items:default' => 0,
        'tmgmt_ui_job_items:submit' => 0,
        'tmgmt_ui_job_messages:block' => 0,
        'tmgmt_ui_job_messages:default' => 0,
        'tmgmt_ui_job_overview:default' => 0,
        'tmgmt_ui_job_overview:page' => 0,
        'top_content:default' => 0,
        'top_content:page_1' => 0,
        'top_content:page_2' => 0,
        'top_content:page_3' => 0,
        'tracker:default' => 0,
        'tracker:page' => 0,
        'webform_analysis:default' => 0,
        'webform_results:default' => 0,
        'webform_submissions:default' => 0,
        'webform_webforms:default' => 0,
        'workbench_current_user:block_1' => 0,
        'workbench_current_user:default' => 0,
        'workbench_edited:block_1' => 0,
        'workbench_edited:default' => 0,
        'workbench_edited:page_1' => 0,
        'workbench_moderation:default' => 0,
        'workbench_moderation:drafts_page' => 0,
        'workbench_moderation:moderate_all_page' => 0,
        'workbench_moderation:needs_review_page' => 0,
        'workbench_recent_content:block_1' => 0,
        'workbench_recent_content:default' => 0,
        'workbench_recent_content:page_1' => 0,
      ),
      'skip_default' => 1,
      'skip_disabled' => 1,
      'skip_empty' => 0,
      'sort_views' => 1,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  // Exported field_base: 'field_msc_look_and_feel'.
  $field_bases['field_msc_look_and_feel'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_look_and_feel',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'msc_custom_components_look_and_feel_options',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_msc_look_and_feel_modules'.
  $field_bases['field_msc_look_and_feel_modules'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_look_and_feel_modules',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'msc_custom_components_look_and_feel_module_options',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_msc_look_and_feel_slides'.
  $field_bases['field_msc_look_and_feel_slides'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_look_and_feel_slides',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'msc_custom_components_look_and_feel_slides_options',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_msc_multiple_component'.
  $field_bases['field_msc_multiple_component'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_multiple_component',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_msc_phrase_text'.
  $field_bases['field_msc_phrase_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_phrase_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_msc_picture'.
  $field_bases['field_msc_picture'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_picture',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_msc_publishing_date'.
  $field_bases['field_msc_publishing_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_publishing_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 1,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_msc_section_ref'.
  $field_bases['field_msc_section_ref'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_section_ref',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'section',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_msc_short_text'.
  $field_bases['field_msc_short_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_short_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_msc_slider'.
  $field_bases['field_msc_slider'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_slider',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_msc_speakers'.
  $field_bases['field_msc_speakers'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_speakers',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_msc_subtitle'.
  $field_bases['field_msc_subtitle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_subtitle',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 100,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_msc_video'.
  $field_bases['field_msc_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_msc_video',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
