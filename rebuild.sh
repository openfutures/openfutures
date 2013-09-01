#!/bin/bash
rm -rf modules/contrib
rm -rf themes/base
rm -rf libraries
drush make --no-gitinfofile --working-copy --no-core --no-cache --contrib-destination=. drupal-org.make .
# Usually run update.php and clear the cache here
