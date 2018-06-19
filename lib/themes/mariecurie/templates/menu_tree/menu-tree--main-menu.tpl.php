<?php

/**
 * @file
 * Contains template file.
 */

if ($variables['depth'] == 2) {
  $variables['atomium']['attributes']['wrapper']
    ->append('class', 'ecl-col');
  ?>

    <div <?php print $atomium['attributes']['wrapper']; ?>>
        <ul class="ecl-navigation-menu__links ecl-list ecl-list--unstyled"><?php print render($tree); ?></ul>
    </div>

  <?php
}
else {
  ?>

    <ul<?php print $atomium['attributes']['wrapper']; ?>><?php print render($tree); ?></ul>

  <?php
}
