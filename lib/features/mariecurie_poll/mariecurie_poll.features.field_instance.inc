<?php
/**
 * @file
 * mariecurie_poll.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mariecurie_poll_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_advpoll-comment_body'.
  $field_instances['comment-comment_node_advpoll-comment_body'] = array(
    'bundle' => 'comment_node_advpoll',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'basic_html' => 'basic_html',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'basic_html' => array(
              'weight' => 5,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-advpoll-advpoll_behavior'.
  $field_instances['node-advpoll-advpoll_behavior'] = array(
    'bundle' => 'advpoll',
    'default_value' => array(
      0 => array(
        'value' => 'approval',
      ),
    ),
    'deleted' => 0,
    'description' => 'Approval voting weighs each vote against each individual choice rather than pooling all votes.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'example_node_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'advpoll_behavior',
    'label' => 'Voting behavior',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-advpoll-advpoll_choice'.
  $field_instances['node-advpoll-advpoll_choice'] = array(
    'bundle' => 'advpoll',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add at least 2 choices for your poll.  Write-in values indicate user generated content.  If you approve of a choice that has been written in by a user, uncheck it and it will be integrated into the poll for others to vote upon.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'advpoll_field',
        'settings' => array(),
        'type' => 'advpoll_choice',
        'weight' => 1,
      ),
      'example_node_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'advpoll_field',
        'settings' => array(),
        'type' => 'advpoll_choice',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'advpoll_choice',
    'label' => 'Poll choice',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'advpoll_field',
      'settings' => array(),
      'type' => 'advpoll_write_in',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-advpoll-advpoll_closed'.
  $field_instances['node-advpoll-advpoll_closed'] = array(
    'bundle' => 'advpoll',
    'default_value' => array(
      0 => array(
        'value' => 'open',
      ),
    ),
    'deleted' => 0,
    'description' => 'When closed, a poll may no longer be voted upon but will display its results if settings allow.  For blocks, polls that are enabled to show results will show results, otherwise the block will no longer be available.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'example_node_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'advpoll_closed',
    'label' => 'Close poll',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-advpoll-advpoll_cookie_duration'.
  $field_instances['node-advpoll-advpoll_cookie_duration'] = array(
    'bundle' => 'advpoll',
    'default_value' => array(
      0 => array(
        'value' => 60,
      ),
    ),
    'deleted' => 0,
    'description' => 'If the poll\'s voting availability is being controlled by a cookie, this value determine how long to wait between votes in minutes.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'example_node_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'advpoll_cookie_duration',
    'label' => 'Cookie duration',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-advpoll-advpoll_dates'.
  $field_instances['node-advpoll-advpoll_dates'] = array(
    'bundle' => 'advpoll',
    'deleted' => 0,
    'description' => 'Select the date range that controls the availability of this poll.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'example_node_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'advpoll_dates',
    'label' => 'Poll availability',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'strtotime',
      'default_value_code' => '',
      'default_value_code2' => '+30 days',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+1',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-advpoll-advpoll_max_choices'.
  $field_instances['node-advpoll-advpoll_max_choices'] = array(
    'bundle' => 'advpoll',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Select the maximum number of choices that can be voted upon.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'example_node_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'advpoll_max_choices',
    'label' => 'Maximum choices',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-advpoll-advpoll_mode'.
  $field_instances['node-advpoll-advpoll_mode'] = array(
    'bundle' => 'advpoll',
    'default_value' => array(
      0 => array(
        'value' => 'normal',
      ),
    ),
    'deleted' => 0,
    'description' => 'Warning, changing this setting after votes have already been recorded for this poll will cause existing votes to be flushed.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'example_node_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'advpoll_mode',
    'label' => 'Vote storage mode',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-advpoll-advpoll_options'.
  $field_instances['node-advpoll-advpoll_options'] = array(
    'bundle' => 'advpoll',
    'default_value' => array(
      0 => array(
        'value' => 'showvotes',
      ),
    ),
    'deleted' => 0,
    'description' => 'Permission settings are necessary for allowing write-in voting, visibility of individual votes and administration of electoral lists.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'example_node_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'advpoll_options',
    'label' => 'Voting options',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-advpoll-advpoll_results'.
  $field_instances['node-advpoll-advpoll_results'] = array(
    'bundle' => 'advpoll',
    'default_value' => array(
      0 => array(
        'value' => 'aftervote',
      ),
    ),
    'deleted' => 0,
    'description' => 'This value determines when to show the results of a poll.  By default, while voting is on going, users will see the results so long as they are no longer eligible to vote.  To display results without allowing an opportunity to vote, select \'After poll is closed\' and close the poll.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'example_node_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'advpoll_results',
    'label' => 'Display results',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-advpoll-body'.
  $field_instances['node-advpoll-body'] = array(
    'bundle' => 'advpoll',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'advpoll_list' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 100,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add at least 2 choices for your poll.  Write-in values indicate user generated content.  If you approve of a choice that has been written in by a user, uncheck it and it will be integrated into the poll for others to vote upon.');
  t('Approval voting weighs each vote against each individual choice rather than pooling all votes.');
  t('Close poll');
  t('Comment');
  t('Cookie duration');
  t('Description');
  t('Display results');
  t('If the poll\'s voting availability is being controlled by a cookie, this value determine how long to wait between votes in minutes.');
  t('Maximum choices');
  t('Permission settings are necessary for allowing write-in voting, visibility of individual votes and administration of electoral lists.');
  t('Poll availability');
  t('Poll choice');
  t('Select the date range that controls the availability of this poll.');
  t('Select the maximum number of choices that can be voted upon.');
  t('This value determines when to show the results of a poll.  By default, while voting is on going, users will see the results so long as they are no longer eligible to vote.  To display results without allowing an opportunity to vote, select \'After poll is closed\' and close the poll.');
  t('Vote storage mode');
  t('Voting behavior');
  t('Voting options');
  t('Warning, changing this setting after votes have already been recorded for this poll will cause existing votes to be flushed.');
  t('When closed, a poll may no longer be voted upon but will display its results if settings allow.  For blocks, polls that are enabled to show results will show results, otherwise the block will no longer be available.');

  return $field_instances;
}
