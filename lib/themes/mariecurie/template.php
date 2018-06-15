<?php

/**
 * @file
 * Theme functions.
 */

/**
 * Implements hook_preprocess_HOOK().
 */
function mariecurie_preprocess_region(&$variables) {

  //dsm($variables);
}

/**
 * Implements hook_preprocess_HOOK().
 */
function mariecurie_preprocess_page(&$variables) {
  if ($variables['is_front']) {
    $variables['msc_content_id'] = ' id="home_page"';
    $variables['hide_title'] = TRUE;
  }

  if ($variables['node']->type == 'msc_article') {
    $variables['hide_title'] = TRUE;
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
  if (preg_match('/^webform_client/', $form_id)) {
    if ($form['#node']->title === 'Newsletter') {
      unset($form['submitted']['email']['#theme_wrappers']);
      $form['actions']['submit']['#attributes']['class'] = [
        'ecl-button',
        'ecl-button--primary',
      ];
    }
  }
}
