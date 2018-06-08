<?php

/**
 * @file
 * TODO: Enter file description here.
 */

/**
 * Form builder.
 */
function msc_custom_components_settings_form($form, &$form_state) {
  $form['msc_custom_components_variable_foo'] = array(
    '#type' => 'textfield',
    '#title' => t('Foo'),
    '#default_value' => variable_get('msc_custom_components_variable_foo', 42),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
