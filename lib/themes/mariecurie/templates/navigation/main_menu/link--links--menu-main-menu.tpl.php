<?php

/**
 * @file
 * Contains template file.
 */

$atomium['attributes']['element']->append('class', ['ecl-navigation-menu__link']);
?>
<a<?php print $atomium['attributes']['element']; ?>><?php print render($prefix); ?><?php print render($text); ?></a>
