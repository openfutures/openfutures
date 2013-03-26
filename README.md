Open Futures
============

To build the profile, run:

  drush make build-openfutures.make /path/to/wwwroot

For a copy of the project ready for development tasks you could try:

  drush make --working-copy --no-gitinfofile --prepare-install https://gist.github.com/petercossey/0824dc6da7f817c5c670/raw/f3d93a0971bfa94af898870864fa611885bbf2ca/build-openfutures.make /path/to/wwwroot


Installing
----------

Once you've built the project you can quickly install it using Drush as well.

  drush si --db-su=root --db-su-pw=password --db-url=mysql://openfutures:openfutures@localhost/openfuturesdb openfutures

NB: Replace all the database parameters with your own settings.


Staging Site
------------

A staging site with the latest stable development version is live at: http://openfutures.staging.thislittleduck.com/
