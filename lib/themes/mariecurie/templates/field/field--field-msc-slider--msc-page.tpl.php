<?php

/**
 * @file
 * Slider page.
 */
?>

<div class="slider-container <?php print $classes; ?>"<?php print $attributes; ?>>
  <?php foreach ($items as $delta => $item): ?>
    <?php
    $style_attr = '';
    if (!empty($item['entity']['paragraphs_item']) && ($slide = current($item['entity']['paragraphs_item'])) && !empty($slide['field_msc_back_img_component'])) {
      $style_attr = ' style="background-image: url(\'' . trim(strip_tags(drupal_render($slide['field_msc_back_img_component']))) . '\');"';
      //$url = trim(strip_tags(drupal_render($slide['field_msc_back_img_component'])));
    }
    ?>
      <figure class="slide <?php print ($delta === 0 ? ' active' : ''); ?>"<?php print $style_attr; ?>>
        <!--  <img src="<?php print $url; ?>" alt="" /> -->
        <?php print render($item); ?>
      </figure>
  <?php endforeach; ?>
</div>
