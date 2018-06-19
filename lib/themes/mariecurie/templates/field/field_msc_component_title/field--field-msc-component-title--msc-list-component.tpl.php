<?php

/**
 * @file
 * Default template implementation to display the value of a field.
 */
?>

<?php foreach ($items as $delta => $item): ?>
    <span class="article-title"><?php print render($item); ?></span>
<?php endforeach; ?>
