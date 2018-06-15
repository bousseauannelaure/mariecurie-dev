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
          $main_menu= menu_tree_all_data('main-menu');
          $main_menu = menu_navigation_links('main-menu');
          theme('links__menu_main_menu', array('links' => $main_menu));
          ?>
        <ul class="ecl-navigation-menu__root" id="nav-menu-expandable-root" aria-hidden="true">

            <li class="ecl-navigation-menu__item">
                <a href="../../example.html#home" class="ecl-navigation-menu__link">Home</a>
            </li>
            <li class="ecl-navigation-menu__item ecl-navigation-menu__item--active">
                <a href="../../example.html#item1" class="ecl-navigation-menu__link" aria-controls="nav-menu-expandable-group-2" aria-expanded="false" aria-haspopup="true">Policy</a>
                <div class="ecl-navigation-menu__group ecl-row" id="nav-menu-expandable-group-2">
                    <div class="ecl-col">
                        <ul class="ecl-navigation-menu__links ecl-list ecl-list--unstyled">
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item1-1-1" class="ecl-navigation-menu__link">Sub item 1</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item1-1-2" class="ecl-navigation-menu__link">Sub item 2 with a very very very (very) long label</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item1-1-3" class="ecl-navigation-menu__link">Sub item 3</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item1-1-4" class="ecl-navigation-menu__link ecl-navigation-menu__link--active">Sub item 4</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item1-1-5" class="ecl-navigation-menu__link">Sub item 5</a>
                            </li>
                        </ul>
                    </div>

                </div>
            </li>
            <li class="ecl-navigation-menu__item">
                <a href="../../example.html#item2" class="ecl-navigation-menu__link" aria-controls="nav-menu-expandable-group-3" aria-expanded="false" aria-haspopup="true">Advisor Bodies</a>
                <div class="ecl-navigation-menu__group ecl-row" id="nav-menu-expandable-group-3">
                    <div class="ecl-col">
                        <div class="ecl-navigation-menu__title">Optional title 1</div>
                        <ul class="ecl-navigation-menu__links ecl-list ecl-list--unstyled">
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item2-1-1" class="ecl-navigation-menu__link">Sub item 1</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item2-1-2" class="ecl-navigation-menu__link">Sub item 2 with a very very very (very) long label</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item2-1-3" class="ecl-navigation-menu__link">Sub item 3</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item2-1-4" class="ecl-navigation-menu__link">Sub item 4</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item2-1-5" class="ecl-navigation-menu__link">Sub item 5</a>
                            </li>
                        </ul>
                    </div>

                </div>
            </li>
            <li class="ecl-navigation-menu__item">
                <a href="../../example.html#item3" class="ecl-navigation-menu__link" aria-controls="nav-menu-expandable-group-4" aria-expanded="false" aria-haspopup="true">News & Events</a>
                <div class="ecl-navigation-menu__group ecl-row" id="nav-menu-expandable-group-4">
                    <div class="ecl-col">
                        <div class="ecl-navigation-menu__title">Optional title 1</div>
                        <ul class="ecl-navigation-menu__links ecl-list ecl-list--unstyled">
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item3-1-1" class="ecl-navigation-menu__link">Sub item 1</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item3-1-2" class="ecl-navigation-menu__link">Sub item 2 with a very very very (very) long label</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item3-1-3" class="ecl-navigation-menu__link">Sub item 3</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item3-1-4" class="ecl-navigation-menu__link">Sub item 4</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item3-1-5" class="ecl-navigation-menu__link">Sub item 5</a>
                            </li>
                        </ul>
                    </div>
                </div>
            </li>
            <li class="ecl-navigation-menu__item">
                <a href="../../example.html#item4" class="ecl-navigation-menu__link" aria-controls="nav-menu-expandable-group-5" aria-expanded="false" aria-haspopup="true">Contracts and Fundings</a>
                <div class="ecl-navigation-menu__group ecl-row" id="nav-menu-expandable-group-5">
                    <div class="ecl-col">
                        <div class="ecl-navigation-menu__title">Optional title 1</div>
                        <ul class="ecl-navigation-menu__links ecl-list ecl-list--unstyled">
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item4-1-1" class="ecl-navigation-menu__link">Sub item 1</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item4-1-2" class="ecl-navigation-menu__link">Sub item 2 with a very very very (very) long label</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item4-1-3" class="ecl-navigation-menu__link">Sub item 3</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item4-1-4" class="ecl-navigation-menu__link">Sub item 4</a>
                            </li>
                            <li class="ecl-navigation-menu__item">
                                <a href="../../example.html#item4-1-5" class="ecl-navigation-menu__link">Sub item 5</a>
                            </li>
                        </ul>
                    </div>
                </div>
            </li>
        </ul>
    </div>
</nav>