<?php

/**
 * @file
 * Theme functions.
 */

/**
 * Implements hook_preprocess_HOOK().
 */
function mariecurie_preprocess_page(&$variables) {
  if ($variables['is_front']) {
    $variables['msc_content_id'] = ' id="home_page"';
  }
}
