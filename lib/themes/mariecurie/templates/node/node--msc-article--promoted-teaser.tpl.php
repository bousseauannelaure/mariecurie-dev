<div class="col-xs-12 col-md-6">
    <article class="card card-module raised">
        <div class="card-header"></div>
        <div class="card-body">
            <header><?php print $title; ?></header>
            <time class="hidden-xs"><?php print format_date($node->created, 'article'); ?></time>
            <?php print render($content['field_msc_desc']); ?>
            <a href="#" class="cta"><strong>Read more</strong></a>
        </div>
    </article>
</div>