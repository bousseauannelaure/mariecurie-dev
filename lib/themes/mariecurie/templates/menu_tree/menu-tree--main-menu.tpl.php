<?php

/**
 * @file
 * Contains template file.
 */
$element = $variables['element'];

if ($element['#below']) {
    $variables['atomium']['attributes']['wrapper']
        ->append('class', 'ecl-col');
    ?>

    <div <?php print $atomium['attributes']['wrapper']; ?>>
        <ul class="ecl-navigation-menu__links ecl-list ecl-list--unstyled"><?php print render($tree); ?></ul>
    </div>

    <?php
    } else {
    ?>

    <li<?php print $atomium['attributes']['wrapper']; ?>><?php print render($output); ?><?php print render($sub_menu); ?></li>

    <?php
    }
}
