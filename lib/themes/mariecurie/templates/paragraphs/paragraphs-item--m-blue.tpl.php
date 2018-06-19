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
if (empty($content['field_msc_display_component']['#items'][0]['value'])) :

    $style_attr = '';
    if (!empty($content['field_msc_back_img_component'])) {
        $style_attr = ' style="background-image: url(' . trim(strip_tags(drupal_render($content['field_msc_back_img_component']))) . ');"';
    }
    ?>


<div class="module-flex-item module-blue hover panel <?php print $classes; ?>"<?php print $attributes; ?>>
    <div class="front">
        <div class="upper-half" <?php print $style_attr; ?>>
        </div>
        <div class="lower-half">
            <?php print render($content['field_msc_component_title']); ?>
        </div>
    </div>
    <div class="back">
        <a href="<?php print trim(strip_tags(render($content['field_msc_link_to_module']))); ?>">
            <div class="description">
                <?php print render($content['field_msc_short_text']); ?>
            </div>
        </a>
    </div>
</div>
<?php endif; ?>
