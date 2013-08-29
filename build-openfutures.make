; This file describes the core project requirements for Open Futures
;
; Use this file to build a full project including Drupal core (with patches)
; and the Rec Post install profile using the following command:
;
;     $ drush make build-openfutures.make [directory]

api = 2
core = 7.x

; Include Drupal core and any core patches.
includes[] = drupal-org-core.make

projects[openfutures][type] = profile
projects[openfutures][download][type] = git
projects[openfutures][download][url] = git@github.com:thislittleduck/openfutures.git
projects[openfutures][download][branch] = master
