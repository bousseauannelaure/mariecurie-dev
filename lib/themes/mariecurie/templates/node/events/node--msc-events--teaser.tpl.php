<?php

/**
 * @file
 * Contains template file.
 */
?>
<a href="#listing-date-two-1" class="ecl-link ecl-list-item__link">
    <div class="ecl-list-item__primary">
        <?php print render($content['field_msc_publishing_date']); ?>
    </div>
    <div class="ecl-list-item__body">
        <p class="text-blue-light ecl-heading ecl-heading--h3"><?php print $title; ?></p>
      <?php print render($content['field_msc_desc']); ?>
    </div>
</a>