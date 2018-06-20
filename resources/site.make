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
projects[advpoll][subdir] = "contrib"
projects[blockreference][subdir] = "contrib"
projects[charts][subdir] = "contrib"
projects[features_extra][subdir] = "contrib"
projects[field_group][subdir] = "contrib"
projects[file_entity][subdir] = "contrib"
projects[image_url_formatter][subdir] = "contrib"
projects[list_predefined_options][subdir] = "contrib"
projects[media_oembed][subdir] = "contrib"
projects[paragraphs][subdir] = "contrib"
projects[paragraphs][version] = "1.0-rc5"
projects[plupload][subdir] = "contrib"
projects[special_menu_items][subdir] = "contrib"
projects[votingapi][subdir] = "contrib"


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
