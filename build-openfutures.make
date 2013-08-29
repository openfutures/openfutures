; This file describes the core project requirements for Open Futures
;
; Use this file to build a full project including Drupal core (with patches)
; and the Rec Post install profile using the following command:
;
;     $ drush make build-openfutures.make [directory]

api = 2
core = 7.x

; Include Drupal core and any core patches.
projects[drupal][type] = core
projects[drupal][version] = 7.23

; Use vocabulary machine name for permissions
; http://drupal.org/node/995156
projects[drupal][patch][995156] = http://drupal.org/files/issues/995156-5_portable_taxonomy_permissions.patch

projects[openfutures][type] = profile
projects[openfutures][download][type] = git
projects[openfutures][download][url] = git@github.com:thislittleduck/openfutures.git
projects[openfutures][download][branch] = master
