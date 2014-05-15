Open Futures
============

To build the profile, run:

  drush make build-openfutures.make /path/to/wwwroot

For a copy of the project ready for development tasks you could try:

  drush make --working-copy --no-gitinfofile --prepare-install https://gist.githubusercontent.com/petercossey/3fc79c2c99b336f1ed3d/raw/9ed8647cb5f5027ef44676cdde0d626e077ceb80/build-openfutures.make /path/to/wwwroot


Installing
----------

Once you've built the project you can quickly install it using Drush as well.

  drush si --db-su=root --db-su-pw=password --db-url=mysql://openfutures:openfutures@localhost/openfuturesdb openfutures

NB: Replace all the database parameters with your own settings.
