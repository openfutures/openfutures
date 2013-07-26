; Include Build Kit install profile makefile via URL
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

; Build Kit overrides =========================================================

; Get CTools security update while we wait for Build Kit to get updated
; projects[ctools][version] = 1.3
; Was getting errors related to a views exposed filter block, this issue pointed
; to a solution: https://drupal.org/node/1962838
projects[ctools][revision] = e81da7a57f63ca95d2c713afcec65a5659aada9e

; Get View security update while we wait for Build Kit to get updated
projects[views][version] = 3.7

; Get the 2.x branch of Features
projects[features][version] = 2.0-rc1

; Contrib modules ============================================================

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.7

projects[blockify][subdir] = contrib
projects[blockify][version] = 1.2

projects[captcha][subdir] = contrib
projects[captcha][version] = 1.0

projects[date][subdir] = contrib
projects[date][version] = 2.6

projects[entity][subdir] = contrib
projects[entity][version] = 1.1

projects[feeds][subdir] = contrib
projects[feeds][version] = 2.0-alpha8
projects[feeds][patch][] = "https://drupal.org/files/2013238-1-feeds-url-module-support.patch"

projects[feeds_tamper][subdir] = contrib
projects[feeds_tamper][version] = 1.0-beta4

projects[fences][subdir] = contrib
projects[fences][version] = 1.0

projects[field_group][subdir] = contrib
; projects[field_group][version] = 1.1
projects[field_group][revision] = c90651e80a8c4d3495dfd8476eaf83b6cd38175f
; https://drupal.org/node/1278618 Panels integration for field groups on the node edit form.
projects[field_group][patch][] = "https://drupal.org/files/1278618_field_group_panels-48.patch"

projects[fieldable_panels_panes][subdir] = contrib
projects[fieldable_panels_panes][version] = 1.4

projects[geocoder][subdir] = contrib
projects[geocoder][version] = 1.2

projects[geofield][subdir] = contrib
projects[geofield][version] = 1.2

projects[geophp][subdir] = contrib
projects[geophp][version] = 1.7

projects[job_scheduler][subdir] = contrib
projects[job_scheduler][version] = 2.0-alpha3

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.3

projects[languagefield][subdir] = contrib
projects[languagefield][version] = 1.1

projects[leaflet][subdir] = contrib
projects[leaflet][version] = 1.0-beta3

; Leaflet stack got broken somewhere along the way. https://drupal.org/node/1954942#comment-7643639
projects[leaflet][patch][] = "https://drupal.org/files/leaflet-fix_leaflet_library_location-1954942-11_0.patch"

projects[leaflet_markercluster][subdir] = contrib
projects[leaflet_markercluster][version] = 1.0-beta1

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.1

projects[mailsystem][subdir] = contrib
projects[mailsystem][version] = 2.34

projects[mandrill][subdir] = contrib
projects[mandrill][version] = 1.4

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.3

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.7

projects[node_vertical_tab_elements][subdir] = contrib
projects[node_vertical_tab_elements][version] = 3.0

projects[panels][subdir] = contrib
projects[panels][version] = 3.3

projects[panels_breadcrumbs][subdir] = contrib
projects[panels_breadcrumbs][version] = 2.1

projects[panelizer][subdir] = contrib
projects[panelizer][version] = 3.1

projects[r4032login][subdir] = contrib
projects[r4032login][version] = 1.5

projects[recaptcha][subdir] = contrib
projects[recaptcha][version] = 1.9

projects[simplified_menu_admin][subdir] = contrib
projects[simplified_menu_admin][version] = 1.0-beta2

projects[token][subdir] = contrib
projects[token][version] = 1.5

projects[token_filter][subdir] = contrib
projects[token_filter][version] = 1.1

projects[url][subdir] = contrib
projects[url][version] = 1.0

projects[views_timelinejs][subdir] = contrib
projects[views_timelinejs][revision] = b9308d0fe7a8576e15bbb63680501561dbbf3248

projects[webform][subdir] = contrib
projects[webform][version] = 4.0-alpha8

; Themes =====================================================================

projects[zen][subdir] = base
projects[zen][version] = 5.1

projects[tao][subdir] = base
projects[rubik][subdir] = base

; Libraries ==================================================================

libraries[leaflet][download][type] = file
libraries[leaflet][download][url] = http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.6.3.zip
libraries[leaflet][directory_name] = leaflet

libraries[leaflet_markercluster][download][type] = file
libraries[leaflet_markercluster][download][url] = https://github.com/Leaflet/Leaflet.markercluster/archive/master.zip
libraries[leaflet_markercluster][directory_name] = leaflet_markercluster

libraries[timeline][download][type] = "file"
libraries[timeline][download][url] = "https://github.com/VeriteCo/TimelineJS/archive/v2.25.zip"
libraries[timeline][directory_name] = "timeline"
