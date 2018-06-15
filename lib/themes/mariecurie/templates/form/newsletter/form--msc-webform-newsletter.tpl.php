<?php

/**
 * @file
 * Contains template file.
 */
?>
<div class="newsletter-frame ecl-u-pa-xxl">
  <form<?php print $atomium['attributes']['element']->append('class', 'ecl-form'); ?>>
    <div class="text-center">
      <?php print render($element['#children']); ?>
    </div>
  </form>
</div>
