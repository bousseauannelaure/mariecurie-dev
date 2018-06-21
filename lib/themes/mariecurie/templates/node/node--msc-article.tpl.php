<?php

/**
 * @file
 * Article page.
 */
?>
<div class="ecl-container ecl-u-mv-l" xmlns="http://www.w3.org/1999/html">
    <a id="main-content" tabindex="-1"></a>
    <span class="article-date">Published on the <time
                class="hidden-xs"><?php print format_date($node->created, 'custom', 'd/M/Y', 'article'); ?></time></span>

  <?php print render($content['field_msc_picture']); ?>
  <?php print render($content['field_msc_desc']); ?>
  <?php print views_embed_view('articles_section', 'related'); ?>

</div>
