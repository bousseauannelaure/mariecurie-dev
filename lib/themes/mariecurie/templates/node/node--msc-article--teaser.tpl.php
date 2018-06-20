<?php

/**
 * @file
 * Module page.
 */
$style_attr = '';
if (!empty($content['field_msc_picture'])) {
  $style_attr = ' style="background-image: url(' . trim(strip_tags(drupal_render($content['field_msc_picture']))) . ');"';
}

$alias = 'node/' . $node->nid;
$url = drupal_get_path_alias($alias);

?>
<div class="col-xs-12">
    <div class="card card-news card-purple">
        <div class="row raised">
            <div class="col-xs-5 col-sm-3 card-header" <?php print $style_attr; ?>></div>
            <div class="col-xs-7 card-sm-header hidden-sm hidden-md hidden-lg hidden-xl">
                <header class="mb-15"><?php print $title; ?></header>
                <time class="hidden-xs">Published on <?php print format_date($node->created, 'custom', 'd/M/Y', 'article'); ?></time>
            </div>
            <div class="col-xs-12 col-sm-9 card-body">
                <header class="hidden-xs"><?php print $title; ?></header>
                <time class="hidden-xs">Published on <?php print format_date($node->created, 'custom', 'd/M/Y', 'article'); ?></time>
              <?php print render($content['field_msc_desc']); ?>
                <a href="/<?php print $url; ?>" class="cta"><strong>Read
                        more</strong></a>
            </div>
        </div>
    </div>
</div>
