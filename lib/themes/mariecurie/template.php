<?php

/**
 * @file
 * Theme functions.
 */

/**
 * Implements hook_preprocess_HOOK().
 */
function mariecurie_preprocess_region(&$variables) {

}

/**
 * Implements hook_preprocess_HOOK().
 */
function mariecurie_preprocess_page(&$variables) {
  if ($variables['is_front']) {
    $variables['msc_content_id'] = ' id="home_page"';
    $variables['hide_title'] = TRUE;
  }
  elseif (!empty($variables['node']->type)) {
    switch ($variables['node']->type) {
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
