<?php

/**
 * @file
 * Contains template file.
 */

$atomium['attributes']['wrapper']->append('class', ['footer-menu', 'footer-menu-1']);
?>
<ul<?php print $atomium['attributes']['wrapper']; ?>><?php print render($tree); ?></ul>
