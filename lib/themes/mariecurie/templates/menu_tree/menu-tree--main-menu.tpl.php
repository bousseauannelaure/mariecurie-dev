<?php

/**
 * @file
 * Contains template file.
 */
$variables['atomium']['attributes']['wrapper']
    ->append('class', 'ecl-navigation-menu__links ecl-list ecl-list--unstyled');
?>
<div class="ecl-col">
    <ul<?php print $atomium['attributes']['wrapper']; ?>><?php print render($tree); ?></ul>
</div>

