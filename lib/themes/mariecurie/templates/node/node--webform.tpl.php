<?php

/**
 * @file
 * Contains template file.
 */
?>
<h1 class="ecl-heading ecl-heading--h1 text-blue-light"><?php print $title; ?></h1>
<?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
?>
<div class="content">
  <?php print render($content); ?>
</div>
