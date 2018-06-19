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
<div class="ecl-col-5 ecl-col-md-4 ecl-col-lg-2">
  <?php print render($content['field_msc_picture']); ?>
</div>
<div class="ecl-col-7 ecl-col-md-8 ecl-col-lg-10 ecl-u-d-flex ecl-u-d-md-block ecl-u-align-items-center ecl-u-align-items-md-start">
    <h3 class="ecl-heading text-blue-light"><?php print render($content['field_msc_component_title']); ?></h3>
    <div class="ecl-u-d-md-block ecl-u-d-none"><?php print render($content['field_msc_short_text']); ?></div>
</div>
