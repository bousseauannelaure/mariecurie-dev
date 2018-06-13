<?php

/**
 * @file
 * Contains template file.
 */
?>
<footer class="ecl-footer">
    <section class="footer-top">
        <div class="container-fluid">
            <div class="region region-footer-top">
                <section id="block-block-4" class="block block-block mc-footer1 clearfix">


                    <div class="block__content">
                        <div class="footer-one-wrapper col-md-12 col-xs-12">
                            <div class="col-md-3 col-xs-6 footer-global--box">
                                <h4>Opportunities</h4>
                                <ul class="footer-menu footer-menu-1">
                                    <li><a href="https://ec.europa.eu/research/mariecurieactions/msca-actions_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span> About</a>
                                    </li>
                                    <li><a href="https://ec.europa.eu/research/mariecurieactions/msca-actions_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span>
                                            Actions</a></li>
                                    <li>
                                        <a href="https://ec.europa.eu/research/mariecurieactions/how-quick-guide_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span> How to...</a>
                                    </li>
                                    <li><a href="https://ec.europa.eu/research/mariecurieactions/news_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span> News</a>
                                    </li>
                                    <li><a href="https://ec.europa.eu/research/mariecurieactions/events_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span>
                                            Events</a></li>
                                    <li><a href="https://ec.europa.eu/research/mariecurieactions/msca-numbers_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span> MSCA in
                                            Numbers</a></li>
                                </ul>
                            </div>
                            <div class="col-md-3 col-xs-6 footer-global--box">
                                <h4>Quick links</h4>
                                <ul class="footer-menu footer-menu-2">
                                    <li>
                                        <a href="https://ec.europa.eu/research/mariecurieactions/how-to/find-job_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span> Jobs for
                                            researchers</a></li>
                                    <li>
                                        <a href="https://ec.europa.eu/research/mariecurieactions/funded-projects_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span> MSCA
                                            funded projects</a></li>
                                    <li><a href="http://ec.europa.eu/research/participants/portal/desktop/en/home.html"
                                           target="_blank"><span aria-hidden="true"
                                                                 class="fa fa-caret-right">&nbsp;</span> Participant
                                            Portal</a></li>
                                    <li>
                                        <a href="http://ec.europa.eu/research/participants/portal/desktop/en/organisations/partner_search.html"
                                           target="_blank"><span aria-hidden="true"
                                                                 class="fa fa-caret-right">&nbsp;</span> Find a partner</a>
                                    </li>
                                    <li><a href="https://www.mariecuriealumni.eu/" target="_blank"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span> Marie
                                            Curie Alumni</a></li>
                                    <li><a href="https://www.iprhelpdesk.eu/" target="_blank"><span aria-hidden="true"
                                                                                                    class="fa fa-caret-right">&nbsp;</span>
                                            European IPR Helpdesk</a></li>
                                </ul>
                            </div>
                            <div class="col-md-3 col-xs-12 footer-global--box keep-in-touch">
                                <h4>Keep in touch with MSCA</h4>
                                <ul class="sm-list">
                                    <li class="sm-item facebook"><a href="https://www.facebook.com/Marie.Curie.Actions/"
                                                                    style="font-size:1.2em" target="_blank"><span
                                                    aria-hidden="true" class="fa fa-facebook">&nbsp;</span> </a></li>
                                    <li class="sm-item twitter jquery-once-1-processed"><a
                                                href="https://twitter.com/MSCActions" style="font-size:1.2em"
                                                target="_blank"><span aria-hidden="true"
                                                                      class="fa fa-twitter">&nbsp;</span></a></li>
                                </ul>
                            </div>
                            <div class="col-md-3 col-xs-12 footer-global--box last-one">
                                <ul class="picto-list">
                                    <li class="faq"><a
                                                href="https://ec.europa.eu/research/mariecurieactions/report-bug_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span> Report a
                                            bug</a></li>
                                    <li class="faq"><a
                                                href="http://ec.europa.eu/research/participants/portal/desktop/en/support/faq.html#c,faqs=categoryMachineName/t/pp_roles_and_rights/0/1/1/category&amp;tagList/t/MSCA/1/1/1/tag"
                                                target="_blank"><span aria-hidden="true" class="fa fa-caret-right">&nbsp;</span>
                                            FAQ</a></li>
                                    <li class="newsletter"><a
                                                href="http://ec.europa.eu/newsroom/eac/subscription-quick-generic-form-fullpage.cfm?service_id=253"><span
                                                    aria-hidden="true" class="fa fa-caret-right"
                                                    target="_blank">&nbsp;</span> Newsletter</a></li>
                                    <!-- li class="sitemap"><a href="#">Sitemap</a></li -->
                                    <!-- li class="bug"><a href="https://ec.europa.eu/programmes/erasmus-plus/help/report-bug_en">Report a bug</a></li -->
                                    <li><a href="https://ec.europa.eu/research/mariecurieactions/contact_en"><span
                                                    aria-hidden="true" class="fa fa-caret-right">&nbsp;</span>
                                            Contact</a></li>
                                </ul>
                            </div>
                        </div>
                    </div>

                </section>
            </div>
        </div>
    </section>
    <?php if ($footer_left || $footer_middle || $footer_right): ?>

    <?php endif; ?>

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
