<?php

/**
 * @file
 * Contains template file.
 */
?>
<article<?php print $atomium['attributes']['wrapper']; ?>>
<?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
?>
  <?php print render($content); ?>
</article>
