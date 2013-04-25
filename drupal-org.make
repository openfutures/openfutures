; Include Build Kit install profile makefile via URL
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

; Build Kit overrides =========================================================

; Get CTools security update while we wait for Build Kit to get updated
projects[ctools][version] = 1.3

; Get View security update while we wait for Build Kit to get updated
projects[views][version] = 3.7

; Get the 2.x branch of Features
projects[features][version] = 2.0-beta2

; Contrib modules ============================================================

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.5

projects[date][subdir] = contrib
projects[date][version] = 2.6

projects[entity][subdir] = contrib
projects[entity][version] = 1.0

projects[fences][subdir] = contrib
projects[fences][version] = 1.0

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.1

projects[fieldable_panels_panes][subdir] = contrib
projects[fieldable_panels_panes][version] = 1.4

projects[geocoder][subdir] = contrib
projects[geocoder][version] = 1.2

projects[geofield][subdir] = contrib
projects[geofield][version] = 1.1

projects[geophp][subdir] = contrib
projects[geophp][version] = 1.7

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.3

projects[languagefield][subdir] = contrib
projects[languagefield][version] = 1.1

projects[leaflet][subdir] = contrib
projects[leaflet][version] = 1.0-beta2

projects[leaflet_markercluster][subdir] = contrib
projects[leaflet_markercluster][version] = 1.0-beta1

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.1

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.3

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.7

projects[node_vertical_tab_elements][subdir] = contrib
projects[node_vertical_tab_elements][version] = 3.0

projects[panels][subdir] = contrib
projects[panels][version] = 3.3

projects[panelizer][subdir] = contrib
projects[panelizer][version] = 3.1

projects[r4032login][subdir] = contrib
projects[r4032login][version] = 1.5

projects[simplified_menu_admin][subdir] = contrib
projects[simplified_menu_admin][version] = 1.0-beta2

projects[url][subdir] = contrib
projects[url][version] = 1.0

projects[views_timelinejs][subdir] = contrib
projects[views_timelinejs][revision] = b9308d0fe7a8576e15bbb63680501561dbbf3248

; Themes =====================================================================

projects[zen][subdir] = base
projects[zen][version] = 5.1

projects[tao][subdir] = base
projects[rubik][subdir] = base

; Libraries ==================================================================

libraries[leaflet][download][type] = file
libraries[leaflet][download][url] = https://github.com/Leaflet/Leaflet/archive/v0.5.1.zip
libraries[leaflet][directory_name] = leaflet

libraries[leaflet_markercluster][download][type] = file
libraries[leaflet_markercluster][download][url] = https://github.com/Leaflet/Leaflet.markercluster/archive/master.zip
libraries[leaflet_markercluster][directory_name] = leaflet_markercluster

libraries[leaflet][download][type] = "git"
libraries[leaflet][download][url] = "https://github.com/CloudMade/Leaflet.git"
libraries[leaflet][download][revision] = "ae7561ec6b60ca376229193c06d90097536a034b"
libraries[leaflet][directory_name] = "leaflet"


libraries[timeline][download][type] = "file"
libraries[timeline][download][url] = "https://github.com/VeriteCo/TimelineJS/archive/master.zip"
libraries[timeline][directory_name] = "timeline"
