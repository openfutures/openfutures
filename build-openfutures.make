; This file describes the core project requirements for Open Futures
;
; Use this file to build a full project including Drupal core (with patches)
; and the Rec Post install profile using the following command:
;
;     $ drush make build-openfutures.make [directory]

api = 2
core = 7.x

; Include Buildkit profile so we've got a Ctools ready Drupal core:
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org-core.make

projects[recpost][type] = profile
projects[recpost][download][type] = git
projects[recpost][download][url] = git@github.com:thislittleduck/openfutures.git
projects[recpost][download][branch] = master
