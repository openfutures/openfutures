Open Futures
============

To build the profile, run:

  drush make build-openfutures.make /path/to/wwwroot

For a copy of the project ready for development tasks you could try:

  drush make --working-copy --no-gitinfofile --prepare-install https://raw.githubusercontent.com/openfutures/openfutures/master/build-openfutures.make /path/to/wwwroot


Installing
----------

Once you've built the project you can quickly install it using Drush as well.

  drush si --db-su=root --db-su-pw=password --db-url=mysql://openfutures:openfutures@localhost/openfuturesdb openfutures

NB: Replace all the database parameters with your own settings.
