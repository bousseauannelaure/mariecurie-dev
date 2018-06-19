<?php

/**
 * @file
 * Contains template file.
 */
?>
<div class="ecl-page-header">
    <?php print render($breadcrumb); ?>
    <div class="ecl-page-header__body">
        <div class="ecl-container">
            <?php if (!empty($identity)): ?>
                <div class="ecl-page-header__identity">
                    <?php print render($identity); ?>
                </div>
            <?php endif; ?>
            <?php if (!empty($meta)): ?>
                <div class="ecl-page-header__meta">
                    <?php print render($meta); ?>
                </div>
            <?php endif; ?>
            <?php if(!$ec_europa_basic_header): ?>
                <div class="ecl-page-header__title">
                    <h1 class="ecl-heading ecl-heading--h1 ecl-u-color-white">
                        <?php print render($title); ?>
                    </h1>
                </div>
                <?php if (!empty($introduction)): ?>
                    <div class="ecl-page-header__intro">
                        <p class="ecl-paragraph ecl-paragraph--l">
                            <?php print render($introduction); ?>
                        </p>
                    </div>
                <?php endif; ?>
            <?php endif; ?>
        </div>
    </div>
</div>
<nav class="ecl-navigation-menu" aria-label="Main Navigation">
    <div class="ecl-container">
        <button class="ecl-navigation-menu__toggle ecl-navigation-menu__hamburger ecl-navigation-menu__hamburger--squeeze" aria-controls="nav-menu-expandable-root" aria-expanded="false">
      <span class="ecl-navigation-menu__hamburger-box">
        <span class="ecl-navigation-menu__hamburger-inner"></span>
      </span>
            <span class="ecl-navigation-menu__hamburger-label">Menu</span>
        </button>
        <?php
          menu_tree_all_data('main-menu');
          $menu = menu_build_tree('main-menu');
          menu_tree_add_active_path($menu);
          print render(menu_tree_output($menu));
        ?>
    </div>
</nav>
