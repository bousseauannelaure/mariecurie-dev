<?php
$style_attr = '';
if (!empty($node['field_msc_picture'])) {
    $style_attr = ' style="background-image: url(\'' .  trim(strip_tags(drupal_render($node['field_msc_picture']))) . '\');"';
}
?>
<div class="col-xs-12 col-md-6">
    <article class="card card-module raised">
        <div class="card-header" <?php print $style_attr; ?>></div>
        <div class="card-body">
            <header><?php print $title; ?></header>
            <time class="hidden-xs"><?php print format_date($node->created, 'article'); ?></time>
            <?php print render($content['field_msc_desc']); ?>
            <a href="#" class="cta"><strong>Read more</strong></a>
        </div>
    </article>
</div>