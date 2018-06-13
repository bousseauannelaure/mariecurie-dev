<?php

/**
 * @file
 * Contains template file.
 */
?>
<div class="newsletter-frame ecl-u-pa-xxl">
  <form<?php print $atomium['attributes']['element']->append('class', 'ecl-form'); ?>>
    <?php print render($element['#children']); ?>
  </form>
</div>
