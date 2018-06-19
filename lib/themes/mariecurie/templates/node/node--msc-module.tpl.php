<?php

/**
 * @file
 * Module page.
 */
?>
<div class="row mb-100">
    <div class="col-xs-12 col-md-6 col-md-push-6 mb-30">
        <div class="video raised">
          <?php print render($content['field_msc_video']); ?>
        </div>
    </div>
    <div class="col-xs-12 col-md-6 col-md-pull-6">
      <?php print render($content['field_msc_desc']); ?>
    </div>
</div>
<div class="row mb-100">
  <?php print views_embed_view('articles_section', 'block_1'); ?>
</div>
<div class="row">
  <?php print views_embed_view('articles_section', 'block'); ?>
</div>
