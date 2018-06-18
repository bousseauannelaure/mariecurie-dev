<?php
$alias = '/node/'.$node->nid;
//$alias = drupal_get_path_alias('node/' . $node->nid);
?>
<div class="col-xs-12">
    <div class="card card-news card-purple raised">
        <div class="row">
            <div class="col-xs-5 col-sm-3 card-header"></div>
            <div class="col-xs-7 card-sm-header hidden-sm hidden-md hidden-lg hidden-xl">
                <header class="mb-15"><?php print $title; ?></header>
                <time class="hidden-xs"><?php print format_date($node->created, 'article'); ?></time>
            </div>
            <div class="col-xs-12 col-sm-9 card-body">
                <header class="hidden-xs"><?php print $title; ?></header>
                <time class="hidden-xs"><?php print format_date($node->created, 'article'); ?></time>
                <?php print render($content['field_msc_desc']); ?>
                <a href="<?php print $alias; ?>" class="cta"><strong>Read more</strong></a>
            </div>
        </div>
    </div>
</div>
