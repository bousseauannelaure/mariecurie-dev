<?php

/**
 * @file
 * Article page.
 */
?>
<div class="ecl-container ecl-u-mv-l">
    <a id="main-content" tabindex="-1"></a>
    <h1 class="ecl-heading ecl-heading--h1">Blog / Articles</h1>
    <span class="article-title"><?php print $title; ?></span>
    <!--<span class="article-author">Written by <span rel="sioc:has_creator"><a class="ecl-link" href="/users/admin_en">admin</a></span></span>-->
    <span class="article-date">Published on the <time class="hidden-xs"><?php print format_date($node->created, 'article'); ?></time></span>

    <?php print render($content['field_msc_desc']); ?>

</div>
