<?php

/**
 * @file
 * Contains template file.
 */
$variables['atomium']['attributes']['wrapper']
    ->append('class', 'ecl-col');
?>
<div <?php print $atomium['attributes']['wrapper']; ?>>
    <ul class="ecl-navigation-menu__links ecl-list ecl-list--unstyled"><?php print render($tree); ?></ul>
</div>

