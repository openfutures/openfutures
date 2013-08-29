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


Development Scratch Pad
-----------------------

A staging site with the latest stable development version is live at: http://openfutures.staging.thislittleduck.com/


Development Notes
-----------------

Discover modes query string comparisons:

discover?
	keys=
	&field_scenario_subject_tid=
	&field_scenario_location_tid=United+Kingdom
	&date_filter_1%5Bmin%5D%5Bdate%5D=
	&date_filter_1%5Bmax%5D%5Bdate%5D=
	&date_filter%5Bmin%5D%5Bdate%5D=
	&date_filter%5Bmax%5D%5Bdate%5D=
	&items_per_page_item=10

timeline?
	keys=
	&field_scenario_subject_tid=
	&field_scenario_location_tid=United+Kingdom
	&date_filter%5Bmin%5D%5Bdate%5D=
	&date_filter%5Bmax%5D%5Bdate%5D=
	&date_filter_1%5Bmin%5D%5Bdate%5D=
	&date_filter_1%5Bmax%5D%5Bdate%5D=

map?
	keys=
	&field_scenario_subject_tid=
	&tid=United+Kingdom
	&date_filter%5Bmin%5D%5Bdate%5D=
	&date_filter%5Bmax%5D%5Bdate%5D=
	&date_filter_1%5Bmin%5D%5Bdate%5D=
	&date_filter_1%5Bmax%5D%5Bdate%5D=
