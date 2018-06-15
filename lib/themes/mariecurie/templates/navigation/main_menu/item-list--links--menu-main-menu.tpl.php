<?php

/**
 * @file
 * Contains template file.
 */

$atomium['attributes']['list']->append('class', ['ecl-navigation-menu__root']);
$atomium['attributes']['list']->setAttribute('id', 'nav-menu-expandable-root');
$atomium['attributes']['list']->setAttribute('aria-hidden', 'true');
?>
<?php if (!empty($variables['items'])): ?>
  <?php if ($type): ?>
    <<?php print $type; ?><?php print $atomium['attributes']['list']; ?>>
  <?php endif; ?>
  <?php foreach ($variables['items'] as $item): ?>
    <?php print render($item); ?>
  <?php endforeach; ?>
  <?php if ($type): ?>
    </<?php print $type; ?>>
  <?php endif; ?>
<?php endif; ?>
