<?php

/**
 * @file
 * Contains template file.
 */
?>
<div class="newsletter-frame">
  <form<?php print $atomium['attributes']['element']->append('class', 'ecl-form'); ?>>
    <div class="text-center">
      <?php print render($element['submitted']['register_newsletter']); ?>
      <?php print render($element['submitted']['email']); ?>
      <?php print render($element['actions']); ?>
      <?php print render($element['submitted']['msc_gdpr']); ?>
    </div>
    <?php print render($element['form_id']); ?>
    <?php print render($element['form_build_id']); ?>
  </form>
</div>
