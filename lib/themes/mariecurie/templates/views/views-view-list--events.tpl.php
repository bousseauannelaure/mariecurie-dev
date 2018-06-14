<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)) : ?>
<h3><?php print $title; ?></h3>
<?php endif; ?>
<ul class="ecl-listing ecl-listing--two-columns date-list ecl-u-pb-l" >
    <?php foreach ($rows as $id => $row): ?>
      <li class="ecl-list-item ecl-list-item--date"><?php print $row; ?></li>
    <?php endforeach; ?>
</ul>
