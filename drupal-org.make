; Include Build Kit install profile makefile via URL
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

; Build Kit overrides =========================================================

; Fix reset action for views exposed filter form
; http://drupal.org/node/1807916
projects[views][patch][1807916] = http://drupal.org/files/views-exposed-form-reset-redirect-1807916-4.patch

; Fix ctools token issue
; https://drupal.org/node/1727804
projects[ctools][patch][1727804] = http://drupal.org/files/ctools-1727804-26.patch

; Get the 2.x branch of Features
projects[features][version] = 2.0-beta1

; Contrib modules ============================================================

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.4

projects[date][subdir] = contrib
projects[date][version] = 2.6

projects[date_popup_authored][subdir] = contrib
projects[date_popup_authored][version] = 1.1

projects[entity][subdir] = contrib
projects[entity][version] = 1.0

projects[fences][subdir] = contrib
projects[fences][version] = 1.0

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.3

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.0

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.3

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.7

projects[simplified_menu_admin][subdir] = contrib
projects[simplified_menu_admin][version] = 1.0-beta2

; Themes =====================================================================

projects[zen][subdir] = base
projects[zen][version] = 5.1

projects[tao][subdir] = base
projects[rubik][subdir] = base

; Libraries ==================================================================
