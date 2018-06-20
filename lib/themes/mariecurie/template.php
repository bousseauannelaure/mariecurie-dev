<?php

/**
 * @file
 * Theme functions.
 */



/**
 * Implements hook_preprocess().
 */
function mariecurie_preprocess(&$variables) {
  if (!empty($variables['paragraphs_item'])) {
    $suffix = '';
    if (!empty($variables['field_msc_look_and_feel'])) {
      $suffix = '__' . $variables['field_msc_look_and_feel'][0]['value'];
    }
    elseif (!empty($variables['field_msc_look_and_feel_modules'])) {
      $suffix = '__' . $variables['field_msc_look_and_feel_modules'][0]['value'];
    }
    elseif (!empty($variables['field_msc_look_and_feel_slides'])) {
      $suffix = '__msc_slide_component__' . $variables['field_msc_look_and_feel_slides'][0]['value'];
    }

    if (!empty($suffix)) {
      $variables['theme_hook_suggestions'][] = $variables['theme_hook_suggestions'][0] . $suffix;
    }
  }
}

/**
 * Implements hook_preprocess_HOOK().
 */
function mariecurie_preprocess_page(&$variables) {
  if ($variables['is_front']) {
    $variables['msc_content_id'] = ' id="home_page"';
    $variables['hide_title'] = TRUE;
  }
  elseif (!empty($variables['node']) && ($current_node = $variables['node'])) {
    switch ($current_node->type) {
      case 'msc_page':
        if (!empty($current_node->field_msc_slider)) {
          $variables['slider'] = field_view_field('node', $current_node, 'field_msc_slider', 'render_programmatically');
        }
        break;
      case 'msc_article':
      case 'advpoll':
        $variables['hide_title'] = TRUE;
        break;
    }
  }
}

/**
 * Implements hook_preprocess_HOOK().
 */
function mariecurie_preprocess_field(&$variables) {
  if (
    !empty($variables['element']['#field_name']) &&
    $variables['element']['#field_name'] === 'field_msc_video' &&
    !empty($variables['items'][0]) &&
    array_key_exists('#image_style', $variables['items'][0]['file'])
  ) {
    $variables['items'][0]['file']['#image_style'] = '552x335';
  }
}

/**
 * Implements hook_preprocess_HOOK().
 */
function mariecurie_preprocess_form(&$variables) {
  if (preg_match('/^webform_client/', $variables['element']['form_id']['#value'])) {
    if ($variables['element']['#node']->title === 'Newsletter') {
      $variables['theme_hook_suggestions'][] = 'form__msc_webform_newsletter';
    }
  }
}

/**
 * Implements hook_preprocess_HOOK().
 */
function mariecurie_preprocess_fieldset(&$variables) {
  switch ($variables['element']['#webform_component']['form_key']) {
    case 'register_newsletter':
      $variables['theme_hook_suggestions'][] = 'fieldset__form__webform_client__register_newsletter';
      break;
  }
}

/**
 * Implements hook_form_alter().
 */
function mariecurie_form_alter(&$form, &$form_state, $form_id) {
  switch (TRUE) {

    case preg_match('/^webform_client/', $form_id):

      if ($form['#node']->title === 'Newsletter') {
        unset($form['submitted']['email']['#theme_wrappers']);
        $form['actions']['submit']['#attributes']['class'] = [
          'ecl-button',
          'ecl-button--primary',
        ];
      }
      break;

    case ('advpoll_choice_form' === $form_id):

    case ('advpoll_cancel_vote_form' === $form_id):

      $form['submit']['#attributes']['class'] = [
        'btn',
        'btn-purple',
      ];
      $form['actions']['show_results']['#attributes']['class'] = [
        'btn',
        'btn-purple',
      ];
      break;
  }
}
