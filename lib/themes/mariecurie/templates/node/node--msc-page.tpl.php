<?php

/**
 * @file
 * Contains template file.
 */
?>
<article<?php print $atomium['attributes']['wrapper']; ?>>
  <?php if ($title_prefix || $title_suffix || $unpublished || $preview || !$page && $title): ?>
  <?php endif; ?>

  <?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  ?>
    <div class="content">
      <?php print render($content); ?>
    </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
