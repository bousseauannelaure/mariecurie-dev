<?php
/**
 * @file
 * mariecurie_global_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mariecurie_global_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_ds_field_settings';
  $strongarm->value = array(
    'node|msc_article|teaser' => TRUE,
    'node|msc_events|teaser' => TRUE,
  );
  $export['default_ds_field_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_ds_layout_settings';
  $strongarm->value = array(
    'node|msc_article|teaser' => TRUE,
    'node|msc_events|teaser' => TRUE,
  );
  $export['default_ds_layout_settings'] = $strongarm;

  return $export;
}
