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