<?php

/**
 * @file
 * Slider page.
 */
?>

<div class="slider-wrapper <?php print $classes; ?>"<?php print $attributes; ?>>
    <div class="content slider"<?php print $content_attributes; ?>>
        <div class="arrows">
            <a class="previous ecl-icon ecl-icon--left"></a>
            <a class="next ecl-icon ecl-icon--right"></a>
        </div>
        <div class="slides">
          <?php foreach ($items as $delta => $item): ?>
            <?php
            $style_attr = '';
            if (!empty($item['entity']['paragraphs_item']) && ($slide = current($item['entity']['paragraphs_item'])) && !empty($slide['field_msc_back_img_component'])) {
              $style_attr = ' style="background-image: url(\'' . trim(strip_tags(drupal_render($slide['field_msc_back_img_component']))) . '\');"';
            }
            ?>
              <div class="slide<?php print ($delta === 0 ? ' active' : ''); ?>"<?php print $style_attr; ?>>
                <?php print render($item); ?>
              </div>
          <?php endforeach; ?>
        </div>
        <div class="bullets"></div>
    </div>
</div>
