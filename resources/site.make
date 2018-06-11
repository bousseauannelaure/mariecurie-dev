; ===================
; This file is intended as an EXAMPLE.
; Copy it to resources/site.make to include it in your builds.
; ===================

api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[paragraphs][subdir] = "contrib"
projects[paragraphs][version] = "1.0-rc5"

projects[advanced_link][subdir] = "contrib"

projects[advpoll][subdir] = "contrib"

projects[bundle_copy][subdir] = "contrib"

projects[ckeditor][subdir] = "contrib"

projects[classy_paragraphs][subdir] = "contrib"

projects[date][subdir] = "contrib"

projects[advanced_link][subdir] = "contrib"

projects[field_group][subdir] = "contrib"

projects[file_entity][subdir] = "contrib"

projects[fpa][subdir] = "contrib"

projects[image_resize_filter][subdir] = "contrib"

projects[media_ckeditor][subdir] = "contrib"

projects[media_oembed][subdir] = "contrib"

projects[multiform][subdir] = "contrib"

projects[plupload][subdir] = "contrib"

projects[views_bulk_operations][subdir] = "contrib"

projects[votingapi][subdir] = "contrib"

projects[webform_ajax][subdir] = "contrib"

; only for dev , do not push to prod

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
