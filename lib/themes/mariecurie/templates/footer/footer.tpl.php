<?php

/**
 * @file
 * Contains template file.
 */
?>
<section class="footer-top">
  <div class="container-fluid">
    <div class="region region-footer-top">
      <section id="block-block-4" class="block block-block mc-footer1 clearfix">
        <div class="block__content">
          <div class="footer-one-wrapper col-md-12 col-xs-12">
            <div class="col-md-3 col-xs-6 footer-global--box">
              <?php
              $menu = menu_load('menu-left-footer-menu');
              print '<h4>' . $menu['title'] . '</h4>';
              $menu = menu_tree($menu['menu_name']);
              print render($menu);
              ?>
            </div>
            <div class="col-md-3 col-xs-6 footer-global--box">
              <?php
              $menu = menu_load('menu-middle-footer-menu');
              print '<h4>' . $menu['title'] . '</h4>';
              $menu = menu_tree($menu['menu_name']);
              print render($menu);
              ?>
            </div>
            <div class="col-md-3 col-xs-12 footer-global--box keep-in-touch">
              <h4>Keep in touch with MSCA</h4>
              <ul class="sm-list">
                <li class="sm-item facebook">
                  <a href="https://www.facebook.com/Marie.Curie.Actions/"
                     style="font-size:1.2em" target="_blank">
                    <span aria-hidden="true"
                          class="fa fa-facebook">&nbsp;</span>
                  </a>
                </li>
                <li class="sm-item twitter jquery-once-1-processed">
                  <a href="https://twitter.com/MSCActions"
                     style="font-size:1.2em" target="_blank">
                    <span aria-hidden="true" class="fa fa-twitter">&nbsp;</span>
                  </a>
                </li>
              </ul>
            </div>
            <div class="col-md-3 col-xs-6 footer-global--box">
              <?php
              $menu = menu_load('menu-right-footer-menu');
              print '<h4>' . $menu['title'] . '</h4>';
              $menu = menu_tree('menu-right-footer-menu');
              print render($menu);
              ?>
            </div>
          </div>
        </div>
      </section>
    </div>
  </div>
</section>
<div class="ecl-footer__site-corporate">
  <div class="ecl-container">
    <div class="ecl-row">
      <div class="ecl-col-sm ecl-footer__column">
        <?php print render($footer_corporate_left); ?>
      </div>
      <div class="ecl-col-sm ecl-footer__column">
        <?php print render($footer_corporate_middle); ?>
      </div>
      <div class="ecl-col-sm ecl-footer__column">
        <?php print render($footer_corporate_right); ?>
      </div>
    </div>
  </div>
</div>
<div class="ecl-footer__ec">
  <div class="ecl-container">
    <div class="ecl-row">
      <div class="ecl-col-sm">
        <?php print render($footer_ec); ?>
      </div>
    </div>
  </div>
</div>
</footer>
