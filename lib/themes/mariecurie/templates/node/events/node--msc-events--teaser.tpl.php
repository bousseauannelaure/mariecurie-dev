<?php

/**
 * @file
 * Contains template file.
 */
?>

<li class="ecl-list-item ecl-list-item--date">
    <a href="#listing-date-two-1" class="ecl-link ecl-list-item__link">
        <div class="ecl-u-sr-only">List item</div>
        <div class="ecl-list-item__primary">
            <div class="list-item--date">
                <strong>13</strong>
                <span>Sep 2018</span>
                <span>5:02 PM</span>
            </div>
        </div>
      <?php print render($content['field_msc_publishing_Date']); ?>

        <div class="ecl-list-item__body">
            <p class="text-blue-light ecl-heading ecl-heading--h3"><?php print $title; ?></p>
          <?php print render($content['field_msc_desc']); ?>
        </div>
    </a>
</li>
