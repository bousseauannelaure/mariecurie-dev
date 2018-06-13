<?php
/**
 * Created by PhpStorm.
 * User: rosan
 * Date: 13/06/2018
 * Time: 19:06
 */
?>
<header class="ecl-site-header" role="banner">
    <div class="ecl-container">
        <section
                class="block-system block-system-user-menu block__system__user-menu ecl-clearfix ecl-u-f-r first last odd weight-0"
                id="block-system-user-menu" role="navigation">
            <nav class="ecl-navigation-list-wrapper">
                <h2 class="ecl-u-sr-only">User menu</h2>
                <ul class="ecl-navigation-list ecl-navigation-list--small menu_tree-level-1">
                    <li class="ecl-navigation-list__item first leaf"><a
                            class="btn btn-default ecl-link ecl-link--standalone ecl-navigation-list__link"
                            data-container="body" data-image="log-in" data-placement="bottom" data-toggle="tooltip"
                            href="/ecas" title="EU login">EU Login</a>
                    </li>
                    <li class="ecl-navigation-list__item last leaf"><a
                            class="btn btn-success ecl-link ecl-link--standalone ecl-navigation-list__link"
                            data-container="body" data-display-title="0" data-image="plus" data-placement="bottom"
                            data-toggle="tooltip" href="/account_request_en" title="Request new account">Create an EU
                        Login account</a>
                    </li>
                </ul>
            </nav>
        </section>
    </div>
    <div aria-label="breadcrumbs" class="ecl-site-switcher ecl-site-switcher--header">

        <ul class="ecl-container ecl-site-switcher__list">
            <li class="ecl-site-switcher__option first"><a class="ecl-link ecl-site-switcher__link"
                                                           href="https://ec.europa.eu/commission/index_en">Commission
                                                           and its priorities</a>
            </li>
            <li class="ecl-site-switcher__option ecl-site-switcher__option--is-selected last"><a
                    class="ecl-link ecl-site-switcher__link" href="https://ec.europa.eu/info/index_en">Policies,
                information and services</a>
            </li>
        </ul>
    </div>
    <div class="ecl-container ecl-site-header__banner">
        <a class="ecl-logo ecl-logo--logotype ecl-site-header__logo" href="https://ec.europa.eu/info/index"
           title="Home - European Commission">
            <span class="ecl-u-sr-only">Home - European Commission</span>
        </a>
        <div class="ecl-language-list ecl-language-list--overlay ecl-site-header__language-list">

            <div id="ecl-overlay-language-list" class="ecl-dialog__overlay ecl-dialog__overlay--blue"
                 aria-hidden="true"></div>


            <div class="ecl-lang-select-sites ecl-link" data-ecl-dialog="ecl-dialog"
                 id="ecl-lang-select-sites__overlay">
                <a href="/language-selector/site-language_en?destination=node" class="ecl-lang-select-sites__link">
                    <span class="ecl-lang-select-sites__label">English</span>
                    <span class="ecl-lang-select-sites__code">
      <span class="ecl-icon ecl-icon--language ecl-lang-select-sites__icon"></span>
      <span class="ecl-lang-select-sites__code-text">en</span>
    </span>
                </a>
            </div>

            <div class="ecl-dialog ecl-dialog--transparent ecl-dialog--wide" id="ecl-dialog"
                 aria-labelledby="ecl-dialog-title" aria-describedby="ecl-dialog-description" aria-hidden="true"
                 role="dialog">
                <h3 id="ecl-dialog-title" class="ecl-heading ecl-heading--h3 ecl-u-sr-only">Dialog</h3>
                <div class="ecl-dialog__body">
                    <section>
                        <div class="">
                            <div class="ecl-container">
                                <div class="ecl-row">
                                    <div class="ecl-col-lg-8 ecl-offset-lg-2">
                                        <h2 lang="en" class="ecl-heading ecl-heading--h2 ecl-dialog__title">
                                            <span class="ecl-icon ecl-icon--generic-lang"></span> Select your language
</h2>
                                        <div class="ecl-row">
                                            <div class="column-0 ecl-col-md-6"><a
                                                    class="active ecl-button ecl-button--block ecl-button--default ecl-icon ecl-icon--icon-check ecl-language-list__button ecl-language-list__button--active ecl-link"
                                                    href="/node_en" hreflang="en" lang="en" rel="alternate"><span
                                                    class="ecl-icon ecl-icon--check ecl-u-f-r"></span>
English</a>
                                            </div>
                                            <button class="ecl-message__dismiss ecl-message__dismiss--inverted">Close
                                            </button>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </section>

                </div>

            </div>
        </div>

        <form accept-charset="UTF-8" action="http://ec.europa.eu/geninfo/query/resultaction.jsp"
              class="ecl-form ecl-search-form search-form" id="nexteuropa-europa-search-search-form" method="get">
            <label class="ecl-search-form__textfield-wrapper">
                <span class="ecl-u-sr-only">Search this website</span>
                <input class="ecl-search-form__textfield ecl-text-input form-text" id="edit-querytext" maxlength="128"
                       name="QueryText" placeholder="Search" size="30" type="text" value=""/></label>
            <button class="btn-search ecl-button ecl-button--form form-button-submit" id="edit-europa-search-submit"
                    name="op" tabindex="-1" type="submit" value="Search">
  Search
            </button>
            <input class="form-hidden" id="edit-swlang" name="swlang" type="hidden" value="en"/>
            <input class="form-hidden" id="form-FZT95rGOADZpwxAglblKJxcgP-DHfO20XzGlxlsNHnw" name="form_build_id"
                   type="hidden" value="form-FZT95rGOADZpwxAglblKJxcgP-DHfO20XzGlxlsNHnw"/>
            <input class="form-hidden" id="edit-nexteuropa-europa-search-search-form" name="form_id" type="hidden"
                   value="nexteuropa_europa_search_search_form"/>
        </form>
    </div>
</header>