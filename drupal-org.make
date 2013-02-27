; Include Build Kit install profile makefile via URL
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

; Build Kit overrides =========================================================

; Fix reset action for views exposed filter form
; http://drupal.org/node/1807916
projects[views][patch][1807916] = http://drupal.org/files/views-exposed-form-reset-redirect-1807916-4.patch

; Fix ctools token issue
; https://drupal.org/node/1727804
projects[ctools][patch][1727804] = http://drupal.org/files/ctools-1727804-26.patch

; Contrib modules ============================================================
