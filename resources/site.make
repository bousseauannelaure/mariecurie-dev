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

; FIELD link formatter with high UI control over internal and external linking

projects[advpoll][subdir] = "contrib"

; Create content type for polling system with permission controls and offers several polling options

projects[ckeditor][subdir] = "contrib"

; Controls library used for WYSIWYG system and format input texts

projects[date][subdir] = "contrib"

; FIELD date with flexible options for content types

projects[charts][subdir] = "contrib"

; synchronizes drupal system with google charts api for displaying nice poll results

projects[field_group][subdir] = "contrib"

; organizes and beautify drupal forms for content management

projects[file_entity][subdir] = "contrib"

; basic module for managing files required per other modules like MEDIA

projects[fpa][subdir] = "contrib"

; leverage permissions management UX

projects[image_resize_filter][subdir] = "contrib"

; automate image resizing for fitting into different content types

projects[list_predefined_options][subdir] = "contrib"

; provide listing options field used with custom module for letting user choose different display templating for same content type ( without using view modes )

projects[media_ckeditor][subdir] = "contrib"

; sync ckeditor with media

projects[media_oembed][subdir] = "contrib"

; let embeding media from external providers, customer request.

projects[multiform][subdir] = "contrib"

; provide wizard for creating related form workflow

projects[paragraphs][subdir] = "contrib"
projects[paragraphs][version] = "1.0-rc5"


; provide flexible components system for templating from site-building

projects[plupload][subdir] = "contrib"

; powerfull upload system script for managing files with Media system

projects[special_menu_items][subdir] = "contrib"

; provide options to standard menu system for adding empty menu items

projects[views_bulk_operations][subdir] = "contrib"

; strong system for triggering actions to many contents at once

projects[votingapi][subdir] = "contrib"

; common drupal system for managing votes

projects[webform_ajax][subdir] = "contrib"

; provide webform actions ajax requests

; only for dev , do not push to prod

projects[bundle_copy][subdir] = "contrib"

projects[replicate_ui][subdir] = "contrib"

projects[replicate_paragraphs][subdir] = "contrib"

projects[replicate][subdir] = "contrib"

projects[realistic_dummy_content][subdir] = "contrib"

projects[module_filter][subdir] = "contrib"

projects[module_builder][subdir] = "contrib"

projects[devel][subdir] = "contrib"


; still testing

projects[view_mode_selector][subdir] = "contrib"


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
