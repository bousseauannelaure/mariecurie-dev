<?php

/**
 * @file
 * Contains template file.
 */
?>
<h1 class="ecl-heading ecl-heading--h1">Polls</h1>


<div class="ecl-row">
    <div class="ecl-col">
        <div class="poll-container raised">
            <div class="poll-header">
                Today's quick poll
            </div>
            <div class="poll-body">
                <?php print render($content['body']); ?>
                <?php print render($content['advpoll_choice']); ?>
            </div>
        </div>
    </div>
</div>
<?php print render($content['comments']); ?>
