<?php
/**
 * @file
 * components_content_type_controler.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function components_content_type_controler_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['global']['default'] = array(
  'additional_settings__active_tab_msc_events' => 'edit-comment',
  'additional_settings__active_tab_msc_page' => 'edit-display',
  'administration_language_negotiation_default' => 'en',
  'administration_language_negotiation_paths' => array(
    0 => '*admin',
    1 => '*admin/*',
    2 => '*node/*/edit*',
    3 => '*node/*/translate*',
    4 => '*admin_menu/*',
    5 => '/*/admin/*',
    6 => '/*/node/*/edit',
    7 => '/*/node/*/translate',
    8 => '/*/admin_menu/*',
  ),
  'admin_theme' => 'seven',
  'autologout_enforce_admin' => 1,
  'autologout_use_alt_logout_method' => 1,
  'autologout_use_watchdog' => 1,
  'autosave_msc_events' => 0,
  'autosave_msc_page' => 0,
  'cache_class_cache_ctools_css' => 'CToolsCssCache',
  'cce_basic_config_admin_pages' => array(
    0 => 'admin/workbench',
    1 => 'admin/content/comment',
    2 => 'admin/content/media',
    3 => 'admin/content/webform',
    4 => 'admin/structure/block',
    5 => 'admin/help',
  ),
  'chosen_disable_search' => 0,
  'chosen_disable_search_threshold' => 0,
  'chosen_jquery_selector' => 'select[multiple="multiple"]',
  'chosen_minimum_multiple' => 0,
  'chosen_minimum_single' => 0,
  'chosen_minimum_width' => 250,
  'chosen_no_results_text' => 'No results match',
  'chosen_placeholder_text_multiple' => 'Choose some options',
  'chosen_placeholder_text_single' => 'Choose an option',
  'chosen_search_contains' => 1,
  'chosen_use_theme' => 1,
  'classification' => 13000,
  'clean_url' => TRUE,
  'comment_advpoll' => 0,
  'comment_anonymous_advpoll' => 0,
  'comment_anonymous_article' => 0,
  'comment_anonymous_editorial_team' => 0,
  'comment_anonymous_msc_article' => 0,
  'comment_anonymous_msc_events' => 0,
  'comment_anonymous_msc_module' => 0,
  'comment_anonymous_msc_page' => 0,
  'comment_anonymous_webform' => 0,
  'comment_anonymous_webinar' => 0,
  'comment_article' => 2,
  'comment_default_mode_advpoll' => 1,
  'comment_default_mode_article' => 1,
  'comment_default_mode_editorial_team' => 1,
  'comment_default_mode_msc_article' => 1,
  'comment_default_mode_msc_events' => 1,
  'comment_default_mode_msc_module' => 1,
  'comment_default_mode_msc_page' => 1,
  'comment_default_mode_webform' => 1,
  'comment_default_mode_webinar' => 1,
  'comment_default_per_page_advpoll' => 50,
  'comment_default_per_page_article' => 50,
  'comment_default_per_page_editorial_team' => 50,
  'comment_default_per_page_msc_article' => 50,
  'comment_default_per_page_msc_events' => 50,
  'comment_default_per_page_msc_module' => 50,
  'comment_default_per_page_msc_page' => 50,
  'comment_default_per_page_webform' => 50,
  'comment_default_per_page_webinar' => 50,
  'comment_editorial_team' => 0,
  'comment_form_location_advpoll' => 1,
  'comment_form_location_article' => 1,
  'comment_form_location_editorial_team' => 1,
  'comment_form_location_msc_article' => 1,
  'comment_form_location_msc_events' => 1,
  'comment_form_location_msc_module' => 1,
  'comment_form_location_msc_page' => 1,
  'comment_form_location_webform' => 1,
  'comment_form_location_webinar' => 1,
  'comment_msc_article' => 0,
  'comment_msc_events' => 1,
  'comment_msc_module' => 1,
  'comment_msc_page' => 1,
  'comment_page' => 0,
  'comment_preview_advpoll' => 1,
  'comment_preview_article' => 1,
  'comment_preview_editorial_team' => 1,
  'comment_preview_msc_article' => 1,
  'comment_preview_msc_events' => 1,
  'comment_preview_msc_module' => 1,
  'comment_preview_msc_page' => 1,
  'comment_preview_webform' => 1,
  'comment_preview_webinar' => 1,
  'comment_subject_field_advpoll' => 1,
  'comment_subject_field_article' => 1,
  'comment_subject_field_editorial_team' => 1,
  'comment_subject_field_msc_article' => 1,
  'comment_subject_field_msc_events' => 1,
  'comment_subject_field_msc_module' => 1,
  'comment_subject_field_msc_page' => 1,
  'comment_subject_field_webform' => 1,
  'comment_subject_field_webinar' => 1,
  'comment_webform' => 0,
  'comment_webinar' => 1,
  'contact_form_maxlength' => 1000,
  'context_block_rebuild_needed' => TRUE,
  'cron_key' => 'zRdpOJy9ZZtkwrbF2qkwcaOc7BPWqnhInBm1BiEqzPo',
  'cron_last' => 1528905280,
  'css_js_query_string' => 'pa9qip',
  'ctools_last_cron' => 1528905285,
  'customerror_403_theme' => 'ec_resp',
  'customerror_404_theme' => 'ec_resp',
  'date_api_version' => 7.2,
  'date_default_timezone' => 'UTC',
  'date_first_day' => 1,
  'date_format_long' => 'l, j F, Y - H:i',
  'date_format_medium' => 'D, d/m/Y - H:i',
  'date_format_short' => 'd/m/Y - H:i',
  'date_views_day_format_without_year' => 'l, F j',
  'date_views_day_format_with_year' => 'l, F j, Y',
  'date_views_month_format_without_year' => 'F',
  'date_views_month_format_with_year' => 'F Y',
  'date_views_week_format_without_year' => 'F j',
  'date_views_week_format_with_year' => 'F j, Y',
  'default_ds_field_settings' => array(
    'paragraphs_item|msc_numbers_component|default' => TRUE,
    'paragraphs_item|msc_slider_component|default' => TRUE,
  ),
  'default_ds_layout_settings' => array(
    'paragraphs_item|msc_numbers_component|default' => TRUE,
    'paragraphs_item|msc_slider_component|default' => TRUE,
  ),
  'default_nodes_main' => 10,
  'diff_enable_revisions_page_node_advpoll' => 1,
  'diff_enable_revisions_page_node_msc_article' => 1,
  'diff_enable_revisions_page_node_msc_events' => 1,
  'diff_enable_revisions_page_node_msc_module' => 1,
  'diff_enable_revisions_page_node_msc_page' => 1,
  'diff_enable_revisions_page_node_webform' => 1,
  'diff_enable_revisions_page_node_webinar' => 1,
  'diff_show_preview_changes_node_advpoll' => 1,
  'diff_show_preview_changes_node_msc_article' => 1,
  'diff_show_preview_changes_node_msc_events' => 1,
  'diff_show_preview_changes_node_msc_module' => 1,
  'diff_show_preview_changes_node_msc_page' => 1,
  'diff_show_preview_changes_node_webform' => 1,
  'diff_show_preview_changes_node_webinar' => 1,
  'diff_view_mode_preview_node_advpoll' => 'full',
  'diff_view_mode_preview_node_msc_article' => 'full',
  'diff_view_mode_preview_node_msc_events' => 'full',
  'diff_view_mode_preview_node_msc_module' => 'full',
  'diff_view_mode_preview_node_msc_page' => 'full',
  'diff_view_mode_preview_node_webform' => 'full',
  'diff_view_mode_preview_node_webinar' => 'full',
  'drupal_http_request_function' => 'chr_curl_http_request',
  'drupal_private_key' => 'fyszLicj47ymWE1nCoPRJe6TwDpyyLwlHyz9_fDFD8U',
  'easy_breadcrumb-capitalizator_mode' => 'ucfirst',
  'easy_breadcrumb-include_home_segment' => 0,
  'easy_breadcrumb-include_invalid_paths' => 0,
  'easy_breadcrumb-include_title_segment' => 0,
  'easy_breadcrumb-segments_separator' => '>',
  'ecas_extra_deny_action_mail' => 'Dear <b>!lastname</b>,
  <br /><br />
  The activation request of the account <b>!name</b> for the site <a href="!site_url"><b>!site_name</b><a> has been denied.
  <br /><br />',
  'ecas_extra_deny_action_subject' => 'Account activation denied',
  'ecas_pages_method' => 1,
  'ecas_profile_core_enabled' => TRUE,
  'ecas_warning_message' => 'Your account is not yet approved',
  'empty_gallery_default' => 'public://default_images/empty_gallery.png',
  'entitycache_enabled' => TRUE,
  'entityreference:base-tables' => array(
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'bean' => array(
      0 => 'bean',
      1 => 'bid',
    ),
    'flagging' => array(
      0 => 'flagging',
      1 => 'flagging_id',
    ),
    'i18n_translation' => array(
      0 => 'i18n_translation_set',
      1 => 'tsid',
    ),
    'og_membership_type' => array(
      0 => 'og_membership_type',
      1 => 'id',
    ),
    'og_membership' => array(
      0 => 'og_membership',
      1 => 'id',
    ),
    'paragraphs_item' => array(
      0 => 'paragraphs_item',
      1 => 'item_id',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'tmgmt_job' => array(
      0 => 'tmgmt_job',
      1 => 'tjid',
    ),
    'tmgmt_job_item' => array(
      0 => 'tmgmt_job_item',
      1 => 'tjiid',
    ),
    'tmgmt_message' => array(
      0 => 'tmgmt_message',
      1 => 'mid',
    ),
    'tmgmt_translator' => array(
      0 => 'tmgmt_translator',
      1 => 'tid',
    ),
    'tmgmt_remote' => array(
      0 => 'tmgmt_remote',
      1 => 'trid',
    ),
    'tmgmt_local_task' => array(
      0 => 'tmgmt_local_task',
      1 => 'tltid',
    ),
    'tmgmt_local_task_item' => array(
      0 => 'tmgmt_local_task_item',
      1 => 'tltiid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'wysiwyg_profile' => array(
      0 => 'wysiwyg',
      1 => 'format',
    ),
    'workbench_moderation_transition' => array(
      0 => 'workbench_moderation_transitions',
      1 => 'id',
    ),
    'rules_config' => array(
      0 => 'rules_config',
      1 => 'id',
    ),
  ),
  'entity_cache_tables_created' => array(
    'paragraphs' => array(
      0 => 'cache_entity_paragraphs_item',
    ),
  ),
  'entity_translation_comment_filter_msc_events' => 0,
  'entity_translation_comment_filter_msc_page' => 0,
  'entity_translation_entity_types' => array(
    'node' => 'node',
    'file' => 'file',
  ),
  'entity_translation_hide_translation_links_msc_events' => 0,
  'entity_translation_hide_translation_links_msc_page' => 0,
  'entity_translation_node_metadata_msc_events' => 0,
  'entity_translation_node_metadata_msc_page' => 0,
  'entity_translation_revision_enabled' => TRUE,
  'entity_translation_settings_file__audio' => array(
    'hide_language_selector' => 0,
    'default_language' => 'xx-et-default',
  ),
  'entity_translation_settings_file__document' => array(
    'hide_language_selector' => 0,
    'default_language' => 'xx-et-default',
  ),
  'entity_translation_settings_file__image' => array(
    'hide_language_selector' => 0,
    'default_language' => 'xx-et-default',
  ),
  'entity_translation_settings_file__video' => array(
    'hide_language_selector' => 0,
    'default_language' => 'xx-et-default',
  ),
  'features_codecache' => array(
    'multisite_settings_core' => array(
      'variable' => 'a9f2478de8debbaedaabe42bedc8c42a',
      'dependencies' => 'f472c09be28257bfacf7c7f59ad1d0fd',
      'views_view' => 'b1cd351e5656053abea5dfe749a37b3a',
    ),
    'cce_basic_config' => array(
      'node' => '99b3b3ca7c77c739c284c9326a815d7f',
      'variable' => 'a593b1483a8d8a781949ce432f7c2769',
      'field_base' => '7ae6e9b0e7c5c2a96823023b3aa1d157',
      'field_instance' => 'f1daf8a2d28d10fb1b541429c4b5eece',
      'menu_custom' => 'e7c777b89ebf2286c7038837ac5690a2',
      'menu_links' => '071a2cccc984cb258e4b2cc49a80920b',
      'taxonomy' => '9f0e747f8243ca62818d175ce6c3afe3',
      'dependencies' => '6e94999b73420c1e88b06e9e7299d331',
      'field_group' => 'ab9cc61c0dc414ade0fce89cb93ceb2b',
      'image' => '1dadbb56c962403fd9778d55cc697900',
      'password_policy' => 'eb9e032be988ef3765ee967d78d6c051',
      'video' => '77fd1b1cb25cfce0eca60e3cf8a44074',
    ),
    'ecas_env' => array(
      'variable' => '41a9629b5b04354c583751c190d3a76b',
      'dependencies' => 'e535ef58895510a05f307d7a50496d35',
    ),
    'nexteuropa_core' => array(
      'variable' => '3114590a5659bf44b9aaf956b48aef0e',
      'field_base' => 'de9e3bc2ad4428b644dca81740008604',
      'dependencies' => '77372bd20651e39e233ef6650fc540d5',
    ),
    'nexteuropa_multilingual' => array(
      'field_base' => '9f692d18f9e0bdbc6ca87571e9ebe84a',
      'dependencies' => '0bccf6485a6f13b55db3051932d9d337',
      'views_view' => 'a35c88871b7173fd39b3ee6789a864d0',
    ),
    'nexteuropa_feature_set' => array(
      'user_role' => 'f6a7dad8a7949eb19ae078bb5a51f3f3',
      'user_permission' => 'df62c8d9f05c58085873ef156436ea23',
      'dependencies' => '0903035fdf1f1a41cea9ea1028640f15',
    ),
    'nexteuropa_editorial' => array(
      'node' => '25d4556aba990e098e1a2b8ba22244bc',
      'variable' => 'be517d1fb3d36a2682bd8f8ccde852a7',
      'field_instance' => '7b6c0bcc2999568d938321568ae8c421',
      'dependencies' => 'd125554908ee8c5f58f117f96a53a1b8',
      'context' => '06d0bb4e49fecd68427bcc467211abf7',
      'ds_layout_settings' => '4e6e63f16591f691b227e0006303a272',
    ),
    'nexteuropa_pages' => array(
      'node' => '08acc4d1646d2dd23b9ff7250108890b',
      'dependencies' => 'b9c5e2f586d1c5e3bab1740ed7174fd9',
    ),
    'taxonomy_browser' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
      'views_view' => 'e3761607b880e8a06995497e43fcba34',
    ),
    'multisite_wysiwyg' => array(
      'dependencies' => '25d84710bfcd1469b0a385c7e359517b',
    ),
    'multisite_autosave' => array(
      'dependencies' => '6817f14883d841e0c006cf91f847f20e',
    ),
    'multisite_custom_error' => array(
      'dependencies' => '90c17ca73aee1faeb0121474deae2ae6',
    ),
    'multisite_workbench_moderation_view' => array(
      'dependencies' => '50ac32b3dd10331a231b8e3bd54cb16d',
    ),
    'multisite_settings_standard' => array(
      'dependencies' => 'd722039e8002ace462e9b5c87adf4335',
    ),
    'components_content_type_controler' => array(
      'node' => 'aec983793089f1c0cccbe79dd94eb648',
      'variable' => 'fc49a06a3d1cc719c9cd03b4281eb22d',
      'field_base' => '038698ede38850a97240eb4ebeef4539',
      'field_instance' => '5c0bbe9d6d41cc16e0cbf6a79c894c53',
      'paragraphs' => '0b65d74d9e0275f0a2855d4742c6cd94',
      'taxonomy' => '92222e3ea0521466f954393d9abaed91',
      'dependencies' => '12613b031ef1b32210de65ac0c4f6c09',
      'views_view' => 'ea9b9d39cf40bffccab7848a269dbea1',
      'bean_type' => '6ddaa9ff14841a33d71f89665ad96547',
    ),
  ),
  'features_ignored_orphans' => array(),
  'features_modules_changed' => FALSE,
  'features_semaphore' => array(),
  'field_bundle_settings_node__advpoll' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msc_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'promoted_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__editorial_team' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => 5,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__msc_article' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msc_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'promoted_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__msc_events' => array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => -5,
        ),
        'path' => array(
          'weight' => 30,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__msc_module' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msc_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'promoted_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__msc_page' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msc_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'promoted_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__webinar' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'msc_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'promoted_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_paragraphs_item__msc_container_component' => array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'msc_full_width' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_1_col' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_2_col' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_paragraphs_item__msc_module_component' => array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_1_col' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_2_col' => array(
        'custom_settings' => FALSE,
      ),
      'msc_full_width' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_paragraphs_item__msc_module_container_component' => array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'msc_full_width' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_1_col' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_2_col' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_paragraphs_item__msc_numbers_component' => array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_1_col' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_2_col' => array(
        'custom_settings' => FALSE,
      ),
      'msc_full_width' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_paragraphs_item__msc_slider_component' => array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_1_col' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_2_col' => array(
        'custom_settings' => FALSE,
      ),
      'msc_full_width' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_paragraphs_item__video_component' => array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'msc_full_width' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_1_col' => array(
        'custom_settings' => FALSE,
      ),
      'full_width_2_col' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_user__user' => array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'realname' => array(
          'default' => array(
            'visible' => 0,
            'weight' => -1,
          ),
        ),
      ),
    ),
  ),
  'file_default_scheme' => 'public',
  'file_private_path' => 'sites/default/files/private_files',
  'file_public_path' => 'sites/default/files',
  'file_temporary_maximum_age' => 21600,
  'file_temporary_path' => '../../tmp',
  'filter_fallback_format' => 'plain_text',
  'i18n_node_default_language_for_msc_page' => '-- current --',
  'i18n_node_extended_editorial_team' => 1,
  'i18n_node_extended_msc_page' => 1,
  'i18n_node_options_editorial_team' => array(),
  'i18n_node_options_msc_page' => array(),
  'i18n_select_nodes' => 0,
  'i18n_string_allowed_formats' => array(
    'full_html' => 'full_html',
    'plain_text' => 'plain_text',
    'filtered_html' => 0,
    'basic_html' => 0,
  ),
  'i18n_sync_node_type_msc_events' => array(),
  'i18n_sync_node_type_msc_page' => array(),
  'image_captcha_bilinear_interpolation' => 1,
  'image_captcha_distortion_amplitude' => 5,
  'install_profile' => 'multisite_drupal_standard',
  'install_task' => 'done',
  'install_time' => 1528815636,
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/jquery/1.10/jquery.min.js',
    2 => 'misc/jquery.once.js',
    3 => 'profiles/multisite_drupal_standard/themes/ec_europa/assets/scripts/misc/ajax.js',
    4 => 'sites/all/themes/mariecurie/assets/scripts/europa.js',
    5 => 'profiles/multisite_drupal_standard/themes/ec_europa/assets/scripts/init.js',
    6 => 'profiles/multisite_drupal_standard/themes/ec_europa/assets/scripts/europa_tabs.js',
    7 => 'profiles/multisite_drupal_standard/themes/ec_europa/assets/scripts/components/table-responsive.js',
    8 => 'sites/all/themes/mariecurie/assets/scripts/mariecurie.js',
    9 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js',
    10 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.widget.min.js',
    11 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.button.min.js',
    12 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.mouse.min.js',
    13 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.draggable.min.js',
    14 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js',
    15 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.resizable.min.js',
    16 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js',
    17 => 'misc/progress.js',
    18 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/js/jquery_update.js',
    19 => 'misc/ajax.js',
    20 => 'profiles/multisite_drupal_standard/modules/contrib/autologout/autologout.js',
    21 => 'profiles/multisite_drupal_standard/modules/contrib/video/js/video.js',
    22 => 'sites/all/modules/contrib/devel/devel_krumo.js',
    23 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.menu.min.js',
    24 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.autocomplete.min.js',
    25 => 'sites/all/modules/devel/coffee/js/coffee.js',
    26 => 'modules/contextual/contextual.js',
    27 => 'misc/form.js',
    28 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js',
    29 => 'profiles/multisite_drupal_standard/modules/contrib/jquery_update/replace/misc/jquery.form.min.js',
    30 => 'profiles/multisite_drupal_standard/modules/contrib/webform/js/webform.js',
    31 => 'profiles/multisite_drupal_standard/modules/custom/language_selector_page/js/language_selector_page.js',
    32 => 'profiles/multisite_drupal_standard/libraries/fancybox/jquery.fancybox.pack.js',
    33 => 'profiles/multisite_drupal_standard/libraries/fancybox/helpers/jquery.fancybox-buttons.js',
    34 => 'profiles/multisite_drupal_standard/libraries/fancybox/helpers/jquery.fancybox-media.js',
    35 => 'profiles/multisite_drupal_standard/libraries/fancybox/helpers/jquery.fancybox-thumbs.js',
    36 => 'profiles/multisite_drupal_standard/modules/contrib/admin_menu/admin_menu.js',
    37 => 'profiles/multisite_drupal_standard/themes/ec_europa/templates/lang_select_site/lang_select_site.js',
    38 => 'profiles/multisite_drupal_standard/themes/ec_europa/templates/menu_tree/menu_tree.js',
    39 => 'profiles/multisite_drupal_standard/themes/ec_europa/templates/status_messages/status_messages.js',
    40 => 'profiles/multisite_drupal_standard/themes/ec_europa/templates/table/table.js',
    41 => 'profiles/multisite_drupal_standard/themes/ec_europa/templates/vertical_tabs/vertical_tabs.js',
  ),
  'jquery_update_compression_type' => 'min',
  'jquery_update_jquery_admin_version' => 1.7,
  'jquery_update_jquery_cdn' => 'none',
  'jquery_update_jquery_version' => '1.10',
  'language_content_type_advpoll' => 0,
  'language_content_type_article' => 2,
  'language_content_type_editorial_team' => 0,
  'language_content_type_msc_article' => 0,
  'language_content_type_msc_events' => 0,
  'language_content_type_msc_module' => 0,
  'language_content_type_msc_page' => 0,
  'language_content_type_page' => 4,
  'language_content_type_webform' => 0,
  'language_content_type_webinar' => 0,
  'language_count' => 2,
  'language_negociation_views' => 1,
  'language_negotiation_language' => array(
    'language-administration' => array(
      'callbacks' => array(
        'language' => 'administration_language_negotiation_admin_language',
      ),
      'file' => 'profiles/multisite_drupal_standard/modules/contrib/administration_language_negotiation/administration_language_negotiation.module',
      'cache' => 0,
    ),
    'nexteuropa_multilingual_url_suffix' => array(
      'callbacks' => array(
        'language' => 'nexteuropa_multilingual_language_negotiation_provider_callback',
        'url_rewrite' => 'nexteuropa_multilingual_language_negotiation_url_rewrite_callback',
        'switcher' => 'nexteuropa_multilingual_language_negotiation_switcher_url',
      ),
      'file' => 'profiles/multisite_drupal_standard/modules/features/nexteuropa_multilingual/nexteuropa_multilingual.callbacks.inc',
    ),
  ),
  'language_negotiation_language_content' => array(
    'nexteuropa_multilingual_url_suffix' => array(
      'callbacks' => array(
        'language' => 'nexteuropa_multilingual_language_negotiation_provider_callback',
        'url_rewrite' => 'nexteuropa_multilingual_language_negotiation_url_rewrite_callback',
        'switcher' => 'nexteuropa_multilingual_language_negotiation_switcher_url',
      ),
      'file' => 'profiles/multisite_drupal_standard/modules/features/nexteuropa_multilingual/nexteuropa_multilingual.callbacks.inc',
    ),
  ),
  'language_negotiation_language_url' => array(
    'nexteuropa_multilingual_url_suffix' => array(
      'callbacks' => array(
        'language' => 'nexteuropa_multilingual_language_negotiation_provider_callback',
        'url_rewrite' => 'nexteuropa_multilingual_language_negotiation_url_rewrite_callback',
        'switcher' => 'nexteuropa_multilingual_language_negotiation_switcher_url',
      ),
      'file' => 'profiles/multisite_drupal_standard/modules/features/nexteuropa_multilingual/nexteuropa_multilingual.callbacks.inc',
    ),
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_types' => array(
    'language' => TRUE,
    'language_content' => TRUE,
    'language_url' => FALSE,
  ),
  'linkchecker_check_links_interval' => 2419200,
  'linkchecker_check_links_types' => 0,
  'linkchecker_cleanup_links_last' => 1528905280,
  'linkchecker_disable_link_check_for_urls' => 'example.com
example.net
example.org',
  'linkchecker_extract_from_a' => 1,
  'linkchecker_extract_from_img' => 1,
  'linkchecker_ignore_response_codes' => '200
206
302
304
401
301
403',
  'linkchecker_impersonate_user' => 'placeholder-for-uid-1',
  'linkchecker_scan_blocks' => 0,
  'linkchecker_scan_comment_msc_events' => 0,
  'linkchecker_scan_comment_msc_page' => 0,
  'linkchecker_scan_nodetypes' => array(
    'page' => 'page',
  ),
  'linkchecker_scan_node_article' => 1,
  'linkchecker_scan_node_msc_events' => 0,
  'linkchecker_scan_node_msc_page' => 0,
  'linkchecker_scan_node_page' => 1,
  'locale_language_providers_weight_language' => array(
    'language-administration' => -10,
    'locale-url' => -8,
    'locale-session' => -6,
    'locale-user' => -4,
    'locale-browser' => -2,
    'language-default' => 10,
  ),
  'mail_system' => array(
    'default-system' => 'MaillogMailSystem',
    'maillog' => 'MaillogMailSystem',
  ),
  'media_icon_base_directory' => 'public://media-icons',
  'media_wysiwyg_alignment' => TRUE,
  'media__file_extensions' => 'jpg jpeg gif png doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv wmv ico',
  'media__wysiwyg_allowed_types' => array(
    0 => 'image',
    1 => 'video',
    2 => 'audio',
    3 => 'document',
  ),
  'media__wysiwyg_browser_plugins' => array(
    0 => 'upload',
    1 => 'media_default--media_browser_1',
    2 => 'media_default--media_browser_my_files',
  ),
  'media__wysiwyg_upload_directory' => '',
  'menu_expanded' => array(
    0 => 'menu-breadcrumb-menu',
    1 => 'menu-service-tools',
  ),
  'menu_masks' => array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 494,
    4 => 493,
    5 => 490,
    6 => 314,
    7 => 253,
    8 => 252,
    9 => 251,
    10 => 250,
    11 => 247,
    12 => 246,
    13 => 245,
    14 => 242,
    15 => 241,
    16 => 238,
    17 => 234,
    18 => 224,
    19 => 157,
    20 => 126,
    21 => 125,
    22 => 124,
    23 => 123,
    24 => 122,
    25 => 121,
    26 => 119,
    27 => 118,
    28 => 117,
    29 => 112,
    30 => 96,
    31 => 84,
    32 => 79,
    33 => 78,
    34 => 77,
    35 => 63,
    36 => 62,
    37 => 61,
    38 => 60,
    39 => 59,
    40 => 58,
    41 => 56,
    42 => 45,
    43 => 44,
    44 => 43,
    45 => 42,
    46 => 39,
    47 => 31,
    48 => 30,
    49 => 29,
    50 => 28,
    51 => 27,
    52 => 26,
    53 => 24,
    54 => 23,
    55 => 22,
    56 => 21,
    57 => 20,
    58 => 19,
    59 => 15,
    60 => 14,
    61 => 13,
    62 => 12,
    63 => 11,
    64 => 10,
    65 => 9,
    66 => 8,
    67 => 7,
    68 => 6,
    69 => 5,
    70 => 4,
    71 => 3,
    72 => 2,
    73 => 1,
  ),
  'menu_options_advpoll' => array(
    0 => 'main-menu',
  ),
  'menu_options_article' => array(
    0 => 'main-menu',
  ),
  'menu_options_editorial_team' => array(),
  'menu_options_msc_article' => array(
    0 => 'main-menu',
  ),
  'menu_options_msc_events' => array(
    0 => 'main-menu',
  ),
  'menu_options_msc_module' => array(
    0 => 'main-menu',
    1 => 'menu-training-modules',
  ),
  'menu_options_msc_page' => array(
    0 => 'main-menu',
  ),
  'menu_options_webform' => array(
    0 => 'main-menu',
  ),
  'menu_options_webinar' => array(
    0 => 'main-menu',
  ),
  'menu_parent_advpoll' => 'main-menu:0',
  'menu_parent_article' => 'main-menu:0',
  'menu_parent_editorial_team' => 'main-menu:0',
  'menu_parent_msc_article' => 'main-menu:0',
  'menu_parent_msc_events' => 'main-menu:0',
  'menu_parent_msc_module' => 'menu-training-modules:0',
  'menu_parent_msc_page' => 'main-menu:0',
  'menu_parent_webform' => 'main-menu:0',
  'menu_parent_webinar' => 'main-menu:0',
  'meta_configuration' => 13000,
  'multisite_version' => 2.3,
  'nexteuropa_multilingual_warning_message_languages' => 'The state of the content <b>[node:title]</b> and all its validated translations <b>[node:entity-translation-languages]</b> will be updated!',
  'node_admin_theme' => 1,
  'node_cron_last' => 1528904604,
  'node_options_advpoll' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_article' => array(
    0 => 'promote',
    1 => 'moderation',
    2 => 'revision',
  ),
  'node_options_editorial_team' => array(
    0 => 'status',
  ),
  'node_options_msc_article' => array(
    0 => 'status',
  ),
  'node_options_msc_events' => array(
    0 => 'status',
  ),
  'node_options_msc_module' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_msc_page' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_page' => array(
    0 => 'moderation',
    1 => 'revision',
  ),
  'node_options_webform' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_webinar' => array(
    0 => 'status',
  ),
  'node_preview_advpoll' => 1,
  'node_preview_article' => 1,
  'node_preview_editorial_team' => 0,
  'node_preview_msc_article' => 0,
  'node_preview_msc_events' => 1,
  'node_preview_msc_module' => 0,
  'node_preview_msc_page' => 1,
  'node_preview_webform' => 1,
  'node_preview_webinar' => 1,
  'node_submitted_advpoll' => 0,
  'node_submitted_article' => 1,
  'node_submitted_editorial_team' => 0,
  'node_submitted_msc_article' => 0,
  'node_submitted_msc_events' => 0,
  'node_submitted_msc_module' => 0,
  'node_submitted_msc_page' => 1,
  'node_submitted_page' => FALSE,
  'node_submitted_webform' => 0,
  'node_submitted_webinar' => 0,
  'password_policy_install_time' => 1528815636,
  'pathauto_blog_pattern' => 'blogs/[user:name]',
  'pathauto_file_pattern' => 'file/[file:name]',
  'pathauto_forum_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_node_advpoll_pattern' => '',
  'pathauto_node_community_pattern' => 'community/[node:title]',
  'pathauto_node_msc_article_pattern' => '',
  'pathauto_node_msc_module_pattern' => 'training-modules/[node:title]',
  'pathauto_node_msc_news_pattern' => '',
  'pathauto_node_msc_page_pattern' => '',
  'pathauto_node_msc_podcast_pattern' => '',
  'pathauto_node_pattern' => 'content/[node:source:title]',
  'pathauto_node_webform_pattern' => '',
  'pathauto_node_webinar_pattern' => '',
  'pathauto_punctuation_hyphen' => 1,
  'pathauto_taxonomy_term_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_taxonomy_term_section_pattern' => '',
  'pathauto_user_pattern' => 'users/[user:name]',
  'path_alias_whitelist' => array(
    'file' => TRUE,
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  ),
  'print_html_display_comment_msc_events' => 0,
  'print_html_display_comment_msc_page' => 0,
  'print_html_display_msc_events' => 1,
  'print_html_display_msc_page' => 1,
  'print_html_display_urllist_msc_events' => 1,
  'print_html_display_urllist_msc_page' => 1,
  'print_html_link_class' => 'print-page',
  'print_html_link_pos' => array(
    'block' => 'block',
    'link' => 0,
    'corner' => 0,
    'help' => 0,
  ),
  'print_html_show_link' => 2,
  'print_mail_display_comment_msc_events' => 0,
  'print_mail_display_comment_msc_page' => 0,
  'print_mail_display_msc_events' => 1,
  'print_mail_display_msc_page' => 1,
  'print_mail_display_urllist_msc_events' => 1,
  'print_mail_display_urllist_msc_page' => 1,
  'print_mail_link_pos' => array(
    'block' => 'block',
    'link' => 0,
    'corner' => 0,
    'help' => 0,
  ),
  'print_mail_show_link' => 2,
  'print_pdf_autoconfig' => 1,
  'print_pdf_book_link' => 1,
  'print_pdf_content_disposition' => 2,
  'print_pdf_display_comment_msc_events' => 0,
  'print_pdf_display_comment_msc_page' => 0,
  'print_pdf_display_msc_events' => 1,
  'print_pdf_display_msc_page' => 1,
  'print_pdf_display_sys_urllist' => 0,
  'print_pdf_display_urllist_msc_events' => 1,
  'print_pdf_display_urllist_msc_page' => 1,
  'print_pdf_dompdf_unicode' => 0,
  'print_pdf_filename' => '[site:name] - [node:title] - [node:changed:custom:Y-m-d]',
  'print_pdf_font_family' => 'dejavusans',
  'print_pdf_font_size' => 10,
  'print_pdf_font_subsetting' => 0,
  'print_pdf_images_via_file' => 0,
  'print_pdf_link_class' => 'print-pdf',
  'print_pdf_link_pos' => array(
    'block' => 'block',
    'link' => 0,
    'corner' => 0,
    'help' => 0,
  ),
  'print_pdf_link_teaser' => 0,
  'print_pdf_link_use_alias' => 0,
  'print_pdf_node_link_pages' => '',
  'print_pdf_node_link_visibility' => 0,
  'print_pdf_orientation_msc_events' => '',
  'print_pdf_orientation_msc_page' => '',
  'print_pdf_page_orientation' => 'portrait',
  'print_pdf_paper_size' => 'A4',
  'print_pdf_pdf_tool' => 'print_pdf_mpdf|profiles/multisite_drupal_standard/libraries/mpdf/mpdf.php',
  'print_pdf_show_link' => 2,
  'print_pdf_size_msc_events' => '',
  'print_pdf_size_msc_page' => '',
  'print_pdf_sys_link_pages' => '',
  'print_pdf_sys_link_visibility' => 1,
  'print_pdf_wkhtmltopdf_options' => '--footer-font-size 7 --footer-right \'[page]\'',
  'rate_widgets' => array(
    0 => (object) array(
      'name' => 'rate_fivestar',
      'tag' => 'vote',
      'title' => 'rate_fivestar',
      'node_types' => array(),
      'comment_types' => array(),
      'options' => array(
        0 => array(
          0 => 0,
          1 => 1,
        ),
        1 => array(
          0 => 25,
          1 => 2,
        ),
        2 => array(
          0 => 50,
          1 => 3,
        ),
        3 => array(
          0 => 75,
          1 => 4,
        ),
        4 => array(
          0 => 100,
          1 => 5,
        ),
      ),
      'template' => 'fivestar',
      'node_display' => 2,
      'teaser_display' => FALSE,
      'comment_display' => 2,
      'node_display_mode' => 1,
      'teaser_display_mode' => 1,
      'comment_display_mode' => 1,
      'roles' => array(
        2 => 2,
        3 => 0,
        1 => 0,
        4 => 0,
        5 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => 1,
      'displayed' => 1,
      'displayed_just_voted' => 2,
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => 0,
      'use_source_translation' => TRUE,
      'value_type' => 'percent',
      'theme' => 'rate_template_fivestar',
      'css' => 'profiles/multisite_drupal_standard/modules/contrib/rate/templates/fivestar/fivestar.css',
      'js' => 'profiles/multisite_drupal_standard/modules/contrib/rate/templates/fivestar/fivestar.js',
      'translate' => TRUE,
    ),
  ),
  'realname_pattern' => '[user:field_firstname] [user:field_lastname]',
  'save_continue_msc_events' => 'Save and add fields',
  'scheduler_expand_fieldset_article' => 0,
  'scheduler_expand_fieldset_msc_events' => 0,
  'scheduler_expand_fieldset_msc_page' => 0,
  'scheduler_expand_fieldset_page' => 0,
  'scheduler_publish_enable_article' => 1,
  'scheduler_publish_enable_msc_events' => 0,
  'scheduler_publish_enable_msc_page' => 0,
  'scheduler_publish_enable_page' => 1,
  'scheduler_publish_moderation_state_article' => 'published',
  'scheduler_publish_moderation_state_msc_events' => 'published',
  'scheduler_publish_moderation_state_msc_page' => 'published',
  'scheduler_publish_moderation_state_page' => 'published',
  'scheduler_publish_past_date_article' => 'error',
  'scheduler_publish_past_date_msc_events' => 'error',
  'scheduler_publish_past_date_msc_page' => 'error',
  'scheduler_publish_past_date_page' => 'error',
  'scheduler_publish_required_article' => 0,
  'scheduler_publish_required_msc_events' => 0,
  'scheduler_publish_required_msc_page' => 0,
  'scheduler_publish_required_page' => 0,
  'scheduler_publish_revision_article' => 1,
  'scheduler_publish_revision_msc_events' => 0,
  'scheduler_publish_revision_msc_page' => 0,
  'scheduler_publish_revision_page' => 1,
  'scheduler_publish_touch_article' => 0,
  'scheduler_publish_touch_msc_events' => 0,
  'scheduler_publish_touch_msc_page' => 0,
  'scheduler_publish_touch_page' => 0,
  'scheduler_unpublish_default_time_article' => '',
  'scheduler_unpublish_default_time_msc_events' => '',
  'scheduler_unpublish_default_time_msc_page' => '',
  'scheduler_unpublish_default_time_page' => '',
  'scheduler_unpublish_enable_article' => 1,
  'scheduler_unpublish_enable_msc_events' => 0,
  'scheduler_unpublish_enable_msc_page' => 0,
  'scheduler_unpublish_enable_page' => 1,
  'scheduler_unpublish_moderation_state_article' => 'expired',
  'scheduler_unpublish_moderation_state_msc_events' => 'draft',
  'scheduler_unpublish_moderation_state_msc_page' => 'draft',
  'scheduler_unpublish_moderation_state_page' => 'expired',
  'scheduler_unpublish_required_article' => 0,
  'scheduler_unpublish_required_msc_events' => 0,
  'scheduler_unpublish_required_msc_page' => 0,
  'scheduler_unpublish_required_page' => 0,
  'scheduler_unpublish_revision_article' => 0,
  'scheduler_unpublish_revision_msc_events' => 0,
  'scheduler_unpublish_revision_msc_page' => 0,
  'scheduler_unpublish_revision_page' => 0,
  'scheduler_use_vertical_tabs_article' => 0,
  'scheduler_use_vertical_tabs_msc_events' => 1,
  'scheduler_use_vertical_tabs_msc_page' => 1,
  'scheduler_use_vertical_tabs_page' => 0,
  'security_allowed_tags' => 'a
abbr
area
audio
b
base
blockquote
br
button
canvas
caption
center
cite
code
col
colgroup
dt
dd
div
dl
em
embed
fieldset
figcaption
figure
font
form
h2
h3
h4
h5
h6
hr
i
iframe
img
input
label
legend
li
map
mark
ol
option
p
pre
q
rp
rt
s
section
select
small
source
span
strike
strong
style
sub
summary
sup
table
tbody
td
textarea
tfoot
th
thead
time
tr
track
tt
u
ul
video
',
  'site_403' => 'customerror/403',
  'site_404' => 'customerror/404',
  'site_default_country' => '',
  'site_frontpage' => 'node/3',
  'site_mail' => 'admin@example.com',
  'site_name' => 'Marie Curie',
  'site_slogan' => '',
  'taxonomy_browser_vocabulary' => array(
    2 => 2,
  ),
  'theme_default' => 'mariecurie',
  'theme_mariecurie_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'theme_debug' => 1,
    'atomium_rebuild_registry' => 1,
    'allow_css_double_underscores' => 1,
    'atomium_convert_inline_js_into_files' => 1,
    'ec_europa_improved_website' => 1,
    'ec_europa_improved_website_home' => 0,
    'ec_europa_basic_header' => 0,
  ),
  'tmgmt_workbench_moderation_states' => array(
    0 => 'validated',
    1 => 'published',
  ),
  'translation_language_type' => 'language_content',
  'transliteration_file_lowercase' => 1,
  'transliteration_file_uploads' => 1,
  'transliteration_file_uploads_display_name' => 1,
  'user_admin_role' => 7,
  'user_classes' => 'btn btn-info btn-xs',
  'user_logout_data_image' => 'log-out',
  'user_myaccount_data_image' => 'user',
  'user_pictures' => 1,
  'user_picture_default' => 'public://default_images/user_default.png',
  'user_picture_dimensions' => '1024x1024',
  'user_picture_file_size' => 800,
  'user_picture_style' => 'thumbnail',
  'user_register' => 2,
  'variable_module_list' => array(
    'stage_file_proxy' => array(
      0 => 'stage_file_proxy_origin',
      1 => 'stage_file_proxy_origin_dir',
      2 => 'stage_file_proxy_hotlink',
      3 => 'stage_file_proxy_use_imagecache_root',
      4 => 'stage_file_proxy_sslversion',
      5 => 'stage_file_proxy_headers',
    ),
  ),
  'variable_realm_list_language' => array(
    0 => 'site_name',
    1 => 'site_slogan',
  ),
  'version_management_node_types' => array(
    'article' => 'article',
    'page' => 'page',
  ),
  'video_autobuffering' => 1,
  'video_autoplay' => 0,
  'video_bypass_conversion' => 0,
  'video_convertor' => 'TranscoderAbstractionFactoryFfmpeg',
  'video_convert_on_save' => 1,
  'video_cron' => 0,
  'video_dimensions' => '320x180
320x240
384x216
384x288
400x225
400x300
432x243
432x324
480x200
480x270
480x360
512x288
560x315
560x420
640x360
640x480
648x486
720x405
720x480
720x486
720x540
720x576
768x576
852x480
864x486
960x400
960x540
960x720
1024x576
1280x720
1280x960
1280x1080
1440x1080
1920x800
1920x1080',
  'video_ffmpeg_instances' => 5,
  'video_ffmpeg_path' => '/ec/prod/app/webroot/flex_home/reference-sources/util/ffmpeg.new/current/bin/ffmpeg',
  'video_preset' => array(
    0 => 'default_flash_conversion',
  ),
  'video_publish_on_complete' => FALSE,
  'video_queue_timeout' => 900,
  'video_thumbnail_count' => 3,
  'video_thumbnail_path' => 'videos/thumbnails',
  'video_transcode_timeout' => 10,
  'video_use_default_thumb' => 0,
  'video_use_preset_wxh' => 1,
  'views_block_hashes' => array(
    'efa462605db51bebca535c860dbd0730' => 'tmgmt_ui_job_item_messages-block',
    '59508d0f437626106c5ca550ee37ee6e' => '-exp-workbench_moderation-moderate_all_page',
    '9cf22433e0efbd8b206c8e4c2edb177c' => 'workbench_recent_content-block_1',
  ),
  'views_exposed_filter_any_label' => 'new_any',
  'views_localization_plugin' => 'i18nstrings',
  'views_show_additional_queries' => 0,
  'views_ui_always_live_preview' => 1,
  'views_ui_custom_theme' => '_default',
  'views_ui_display_embed' => 0,
  'views_ui_show_advanced_column' => 0,
  'views_ui_show_advanced_help_warning' => 1,
  'views_ui_show_listing_filters' => 0,
  'views_ui_show_master_display' => 0,
  'views_ui_show_performance_statistics' => 0,
  'views_ui_show_preview_information' => 1,
  'views_ui_show_sql_query' => 1,
  'views_ui_show_sql_query_where' => 'above',
  'webform_node_msc_events' => 0,
  'webform_node_msc_page' => 0,
  'webform_node_webform' => TRUE,
  'workbench_moderation_default_state_article' => 'draft',
  'workbench_moderation_default_state_msc_events' => 'draft',
  'workbench_moderation_default_state_msc_page' => 'draft',
  '404_fast_paths_exclude' => '/\\/(?:styles)|(?:system\\/files)\\//',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
);

return $realm_variables;
}
