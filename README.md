Open Futures
============

To build the profile, run:

  drush make build-openfutures.make /path/to/wwwroot

For a copy of the project ready for development tasks you could try:

  drush make --working-copy --no-gitinfofile --prepare-install https://gist.github.com/petercossey/0824dc6da7f817c5c670/raw/f6be59cf73b2de7c3a0d6bab40d64e74a53179da/build-openfutures.make /path/to/wwwroot


Installing
----------

Once you've built the project you can quickly install it using Drush as well.

  drush si --db-su=root --db-su-pw=password --db-url=mysql://openfutures:openfutures@localhost/openfuturesdb openfutures

NB: Replace all the database parameters with your own settings.
