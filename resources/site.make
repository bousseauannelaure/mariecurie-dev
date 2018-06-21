; ===================
; This file is intended as an EXAMPLE.
; Copy it to resources/site.make to include it in your builds.
; ===================

api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[advanced_link][subdir] = "contrib"
projects[advanced_link][version] = "7.x-1.3"
projects[advpoll][subdir] = "contrib"
projects[advpoll][version] = "7.x-3.0"
projects[blockreference][subdir] = "contrib"
projects[blockreference][version] = "7.x-2.7"
projects[charts][subdir] = "contrib"
projects[charts][version] = "7.x-2.0"
projects[image_url_formatter][subdir] = "contrib"
projects[image_url_formatter][version] = "7.x-1.4"
projects[list_predefined_options][subdir] = "contrib"
projects[list_predefined_options][version] = "7.x-1.0"
projects[media_oembed][subdir] = "contrib"
projects[media_oembed][version] = "7.x-2.7"
projects[paragraphs][subdir] = "contrib"
projects[paragraphs][version] = "1.0-rc5"
projects[special_menu_items][subdir] = "contrib"
projects[special_menu_items][version] = "7.x-2.0"


; =========
; Libraries
; =========


; ======
; Themes
; ======
projects[atomium][type] = theme
projects[atomium][version] = 2.10
projects[ec_europa][type] = theme
projects[ec_europa][download][type] = git
projects[ec_europa][download][url] = https://github.com/ec-europa/ec_europa.git
projects[ec_europa][download][tag] = 0.0.11
