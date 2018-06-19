<?php

/**
 * @file
 * Module page.
 */

$style_attr = '';
if (!empty($content['field_msc_picture'])) {
  $style_attr = ' style="background-image: url(' . trim(strip_tags(drupal_render($content['field_msc_picture']))) . ');"';
}

$alias = '/node/' . $node->nid;

?>
<div class="col-xs-12 col-md-6">
    <article class="card card-module raised">
        <div class="card-header" <?php print $style_attr; ?>></div>
        <div class="card-body">
            <header><?php print $title; ?></header>
            <time class="hidden-xs"><?php print format_date($node->created, 'article'); ?></time>
          <?php print render($content['field_msc_desc']); ?>
            <a href="<?php print $alias; ?>" class="cta"><strong>Read
                    more</strong></a>
        </div>
    </article>
</div>
