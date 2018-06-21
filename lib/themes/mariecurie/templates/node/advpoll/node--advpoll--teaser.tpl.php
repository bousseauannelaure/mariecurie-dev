<?php

/**
 * @file
 * Contains template file.
 */
?>
<a href="<?php print $node_url; ?>" class="ecl-link ecl-list-item__link">
  <div class="ecl-list-item__body">
    <p class="text-blue-light ecl-heading ecl-heading--h3"><?php print $title; ?></p>
    <?php print render($content['body']); ?>
  </div>
</a>
