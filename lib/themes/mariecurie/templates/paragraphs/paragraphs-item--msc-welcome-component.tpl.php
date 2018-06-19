<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="ecl-col module-item">
  <?php print render($content['field_msc_component_title']); ?>
  <div class="row">
    <div class="col-xs-12 col-md-6 col-md-push-6 mb-30">
      <div class="video raised">
        <?php print render($content['field_msc_video']); ?>
      </div>
    </div>
    <div class="col-xs-12 col-md-6 col-md-pull-6">
      <?php print render($content['field_msc_desc']); ?>
    </div>
  </div>
</div>
