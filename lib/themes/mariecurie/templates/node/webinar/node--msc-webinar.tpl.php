<?php

/**
 * @file
 * Contains template file.
 */
?>
<article<?php print $atomium['attributes']['wrapper']; ?>>
  <h1 class="ecl-heading ecl-heading--h1">Webinar/Video</h1>
<?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
?>
  <div class="ecl-row">
    <div class="ecl-col">
      <span class="article-title"><?php print $title; ?></span>
      <?php print render($content); ?>
    </div>
  </div>
</article>
