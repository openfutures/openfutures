api = 2
core = 7.x

; Required contrib ===========================================================

projects[admin][subdir] = contrib
projects[admin][version] = 2.0-beta3

projects[advanced_help][subdir] = contrib
projects[advanced_help][version] = 1.0

projects[coder][subdir] = contrib
projects[coder][version] = 1.2

projects[context][subdir] = contrib
projects[context][version] = 3.1

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.4
; Was getting errors related to a views exposed filter block, this issue pointed
; to a solution: https://drupal.org/node/1962838

projects[devel][subdir] = contrib
projects[devel][version] = 1.3

projects[diff][subdir] = contrib
projects[diff][version] = 3.2

projects[features][subdir] = contrib
projects[features][version] = 2.0

projects[openidadmin][subdir] = contrib
projects[openidadmin][version] = 1.0

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[views][subdir] = contrib
projects[views][version] = 3.7

; Contrib modules ============================================================

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4

projects[admin_views][subdir] = contrib
projects[admin_views][version] = 1.2

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.7

projects[blockify][subdir] = contrib
projects[blockify][version] = 1.2

projects[boxes][subdir] = contrib
projects[boxes][version] = 1.1

projects[captcha][subdir] = contrib
projects[captcha][version] = 1.0

projects[date][subdir] = contrib
projects[date][version] = 2.6

projects[entity][subdir] = contrib
projects[entity][version] = 1.2

projects[feeds][subdir] = contrib
projects[feeds][version] = 2.0-alpha8
projects[feeds][patch][] = "https://drupal.org/files/2013238-1-feeds-url-module-support.patch"

projects[feeds_tamper][subdir] = contrib
projects[feeds_tamper][version] = 1.0-beta5

projects[fences][subdir] = contrib
projects[fences][version] = 1.0

projects[field_group][subdir] = contrib
; projects[field_group][version] = 1.1
projects[field_group][revision] = c90651e80a8c4d3495dfd8476eaf83b6cd38175f
; https://drupal.org/node/1278618 Panels integration for field groups on the node edit form.
projects[field_group][patch][] = "https://drupal.org/files/1278618_field_group_panels-48.patch"

projects[fieldable_panels_panes][subdir] = contrib
projects[fieldable_panels_panes][version] = 1.5

projects[flag][subdir] = contrib
projects[flag][version] = 3.2

projects[flag_abuse][subdir] = contrib
projects[flag_abuse][version] = 2.0-alpha1
projects[flag_abuse][patch][] = "https://drupal.org/files/undefined-property-2057901-3.patch"

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
projects[languagefield][version] = 1.2

projects[leaflet][subdir] = contrib
projects[leaflet][version] = 1.0-beta3

; Leaflet stack got broken somewhere along the way. https://drupal.org/node/1954942#comment-7643639
projects[leaflet][patch][] = "https://drupal.org/files/leaflet-fix_leaflet_library_location-1954942-11_0.patch"

projects[leaflet_markercluster][subdir] = contrib
projects[leaflet_markercluster][version] = 1.0-beta1

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.1

projects[maillog][subdir] = contrib
projects[maillog][version] = 1.x-dev

projects[mailsystem][subdir] = contrib
projects[mailsystem][version] = 2.34

projects[mandrill][subdir] = contrib
projects[mandrill][version] = 1.5

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.3

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.8

projects[node_vertical_tab_elements][subdir] = contrib
projects[node_vertical_tab_elements][version] = 3.0

projects[panels][subdir] = contrib
projects[panels][version] = 3.3

projects[panels_breadcrumbs][subdir] = contrib
projects[panels_breadcrumbs][version] = 2.1

projects[panelizer][subdir] = contrib
projects[panelizer][version] = 3.1

projects[prepopulate][subdir] = contrib
projects[prepopulate][version] = 2.x-dev

projects[r4032login][subdir] = contrib
projects[r4032login][version] = 1.7

projects[recaptcha][subdir] = contrib
projects[recaptcha][version] = 1.10

projects[rules][subdir] = contrib
projects[rules][version] = 2.6

projects[shield][subdir] = contrib
projects[shield][version] = 1.2

projects[simplified_menu_admin][subdir] = contrib
projects[simplified_menu_admin][version] = 1.0-beta2

projects[term_merge][subdir] = contrib
projects[term_merge][version] = 1.0

projects[token][subdir] = contrib
projects[token][version] = 1.5

projects[token_filter][subdir] = contrib
projects[token_filter][version] = 1.1

projects[url][subdir] = contrib
projects[url][version] = 1.0

projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.1

projects[views_timelinejs][subdir] = contrib
projects[views_timelinejs][revision] = b9308d0fe7a8576e15bbb63680501561dbbf3248

projects[webform][subdir] = contrib
projects[webform][version] = 4.0-beta1

; Themes =====================================================================

projects[zen][subdir] = base
projects[zen][version] = 5.4

projects[tao][subdir] = base
projects[rubik][subdir] = base

; Libraries ==================================================================

libraries[leaflet][download][type] = file
libraries[leaflet][download][url] = http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.6.3.zip
libraries[leaflet][directory_name] = leaflet

libraries[leaflet_markercluster][download][type] = file
libraries[leaflet_markercluster][download][url] = https://github.com/Leaflet/Leaflet.markercluster/archive/master.zip
libraries[leaflet_markercluster][directory_name] = leaflet_markercluster

libraries[timeline][download][type] = file
libraries[timeline][download][url] = https://github.com/VeriteCo/TimelineJS/archive/v2.25.zip
libraries[timeline][directory_name] = timeline
