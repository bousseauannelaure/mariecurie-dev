<?php

/**
 * @file
 * Contains template file.
 */
?>
<article<?php print $atomium['attributes']['wrapper']; ?>>
  <?php if (!$page && $title): ?>
    <span class="article-title" <?php print $title_attributes; ?>>
               <?php print $title; ?>
    </span>

  <?php
  endif;
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  ?>
  <?php print render($content); ?>
  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</article>
