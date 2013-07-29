<?php
/**
 * @file
 * library_discover_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_discover_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'browse_scenarios';
  $view->description = 'Use filters to browse scenarios.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Browse scenarios';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Update';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Debug information';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>No results</h2>
<p>We couldn\'t find any scenarios matching your filter criteria.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scenario' => 'scenario',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['description'] = 'Full text search for scenario titles and descriptions.';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Subject and Keywords (field_scenario_subject) */
  $handler->display->display_options['filters']['field_scenario_subject_tid']['id'] = 'field_scenario_subject_tid';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['table'] = 'field_data_field_scenario_subject';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['field'] = 'field_scenario_subject_tid';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['value'] = '';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_scenario_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['operator_id'] = 'field_scenario_subject_tid_op';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['label'] = 'Keywords and Subjects';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['description'] = 'Separate multiple subjects with a comma.';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['operator'] = 'field_scenario_subject_tid_op';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['identifier'] = 'field_scenario_subject_tid';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_scenario_subject_tid']['vocabulary'] = 'subject';
  /* Filter criterion: Content: Place name (field_scenario_location) */
  $handler->display->display_options['filters']['field_scenario_location_tid']['id'] = 'field_scenario_location_tid';
  $handler->display->display_options['filters']['field_scenario_location_tid']['table'] = 'field_data_field_scenario_location';
  $handler->display->display_options['filters']['field_scenario_location_tid']['field'] = 'field_scenario_location_tid';
  $handler->display->display_options['filters']['field_scenario_location_tid']['value'] = '';
  $handler->display->display_options['filters']['field_scenario_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_scenario_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['operator_id'] = 'field_scenario_location_tid_op';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['description'] = 'Separate multiple place names with a comma.';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['operator'] = 'field_scenario_location_tid_op';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['identifier'] = 'field_scenario_location_tid';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_scenario_location_tid']['vocabulary'] = 'location';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Filter by time horizon';
  $handler->display->display_options['filters']['date_filter_1']['expose']['description'] = 'Displays all scenarios with a time horizon within the range specified.';
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value' => 'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value',
    'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value2' => 'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value2',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Filter by publish date';
  $handler->display->display_options['filters']['date_filter']['expose']['description'] = 'Displays all scenarios with a publish date between the range specified.';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_scenario_date.field_scenario_date_value' => 'field_data_field_scenario_date.field_scenario_date_value',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'discover_mode_list');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['browse_scenarios'] = $view;

  $view = new view();
  $view->name = 'map_scenarios';
  $view->description = 'Display a list of scenarios with location data.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Map scenarios';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Update';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_location_point';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'Custom OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '480';
  $handler->display->display_options['style_options']['icon'] = array(
    'iconUrl' => '',
    'shadowUrl' => '',
    'iconSize' => array(
      'x' => '',
      'y' => '',
    ),
    'iconAnchor' => array(
      'x' => '',
      'y' => '',
    ),
    'shadowAnchor' => array(
      'x' => '',
      'y' => '',
    ),
    'popupAnchor' => array(
      'x' => '',
      'y' => '',
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Debug output';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>No results</h2>
<p>We couldn\'t find any scenarios matching your filter criteria. Reset your filters and try again.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Taxonomy term: Content using Place name */
  $handler->display->display_options['relationships']['reverse_field_scenario_location_node']['id'] = 'reverse_field_scenario_location_node';
  $handler->display->display_options['relationships']['reverse_field_scenario_location_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_scenario_location_node']['field'] = 'reverse_field_scenario_location_node';
  $handler->display->display_options['relationships']['reverse_field_scenario_location_node']['label'] = 'Scenario';
  $handler->display->display_options['relationships']['reverse_field_scenario_location_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_scenario_location_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_location_point']['id'] = 'field_location_point';
  $handler->display->display_options['fields']['field_location_point']['table'] = 'field_data_field_location_point';
  $handler->display->display_options['fields']['field_location_point']['field'] = 'field_location_point';
  $handler->display->display_options['fields']['field_location_point']['label'] = '';
  $handler->display->display_options['fields']['field_location_point']['element_type'] = '0';
  $handler->display->display_options['fields']['field_location_point']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_point']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_location_point']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location_point']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_location_point']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_location_point']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  $handler->display->display_options['fields']['field_location_point']['field_api_classes'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['relationship'] = 'reverse_field_scenario_location_node';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['description'] = 'Full text search for scenario titles and descriptions.';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Subject and Keywords (field_scenario_subject) */
  $handler->display->display_options['filters']['field_scenario_subject_tid']['id'] = 'field_scenario_subject_tid';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['table'] = 'field_data_field_scenario_subject';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['field'] = 'field_scenario_subject_tid';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['relationship'] = 'reverse_field_scenario_location_node';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['value'] = '';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_scenario_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['operator_id'] = 'field_scenario_subject_tid_op';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['label'] = 'Filter by subject';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['description'] = 'Separate multiple subjects with a comma.';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['operator'] = 'field_scenario_subject_tid_op';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['identifier'] = 'field_scenario_subject_tid';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_scenario_subject_tid']['vocabulary'] = 'subject';
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = '';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by location';
  $handler->display->display_options['filters']['tid']['expose']['description'] = 'Separate multiple place names with a comma.';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'location';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'reverse_field_scenario_location_node';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Time Horizon';
  $handler->display->display_options['filters']['date_filter']['expose']['description'] = 'Displays all scenarios with a time horizon within the range specified.';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value' => 'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value',
    'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value2' => 'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value2',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['relationship'] = 'reverse_field_scenario_location_node';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Filter by publish date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['description'] = 'Displays all scenarios with a publish date between the range specified.';
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_scenario_date.field_scenario_date_value' => 'field_data_field_scenario_date.field_scenario_date_value',
  );
  /* Filter criterion: Taxonomy term: Location (field_location_point:lat) */
  $handler->display->display_options['filters']['field_location_point_lat']['id'] = 'field_location_point_lat';
  $handler->display->display_options['filters']['field_location_point_lat']['table'] = 'field_data_field_location_point';
  $handler->display->display_options['filters']['field_location_point_lat']['field'] = 'field_location_point_lat';
  $handler->display->display_options['filters']['field_location_point_lat']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_location_point_lat']['group'] = 1;
  /* Filter criterion: Taxonomy term: Location (field_location_point:lon) */
  $handler->display->display_options['filters']['field_location_point_lon']['id'] = 'field_location_point_lon';
  $handler->display->display_options['filters']['field_location_point_lon']['table'] = 'field_data_field_location_point';
  $handler->display->display_options['filters']['field_location_point_lon']['field'] = 'field_location_point_lon';
  $handler->display->display_options['filters']['field_location_point_lon']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_location_point_lon']['group'] = 1;

  /* Display: Discover Map Pane */
  $handler = $view->new_display('panel_pane', 'Discover Map Pane', 'discover_mode_map');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['map_scenarios'] = $view;

  $view = new view();
  $view->name = 'timeline_scenarios';
  $view->description = 'Use filters to browse scenarios on a timeline.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Timeline scenarios';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Update';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'timelinejs';
  $handler->display->display_options['style_options']['timeline_theme'] = array(
    'width' => '100',
    'width_unit' => '1',
    'height' => '400',
    'height_unit' => '0',
  );
  $handler->display->display_options['style_options']['timeline_fields'] = array(
    'headline' => 'title',
    'bodytext' => 'body',
    'date' => 'field_scenario_time_horizon',
    'media' => 'field_scenario_image',
    'credit' => '0',
    'caption' => '0',
    'tag' => 'field_scenario_subject',
  );
  $handler->display->display_options['style_options']['timeline_config'] = array(
    'link_to_entity' => 1,
    'link_text_enabled' => 1,
    'link_text' => 'read more',
    'hash_bookmark' => '0',
    'start_at_end' => '0',
    'start_zoom_adjust' => '0',
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Debug information';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>No results</h2>
<p>We couldn\'t find any scenarios matching your filter criteria.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_scenario_image']['id'] = 'field_scenario_image';
  $handler->display->display_options['fields']['field_scenario_image']['table'] = 'field_data_field_scenario_image';
  $handler->display->display_options['fields']['field_scenario_image']['field'] = 'field_scenario_image';
  $handler->display->display_options['fields']['field_scenario_image']['label'] = '';
  $handler->display->display_options['fields']['field_scenario_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scenario_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_scenario_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_scenario_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_scenario_image']['field_api_classes'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['label'] = '';
  $handler->display->display_options['fields']['field_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_type']['field_api_classes'] = TRUE;
  /* Field: Content: Subject and Keywords */
  $handler->display->display_options['fields']['field_scenario_subject']['id'] = 'field_scenario_subject';
  $handler->display->display_options['fields']['field_scenario_subject']['table'] = 'field_data_field_scenario_subject';
  $handler->display->display_options['fields']['field_scenario_subject']['field'] = 'field_scenario_subject';
  $handler->display->display_options['fields']['field_scenario_subject']['label'] = '';
  $handler->display->display_options['fields']['field_scenario_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scenario_subject']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_scenario_subject']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_scenario_subject']['field_api_classes'] = TRUE;
  /* Field: Content: Time Horizon */
  $handler->display->display_options['fields']['field_scenario_time_horizon']['id'] = 'field_scenario_time_horizon';
  $handler->display->display_options['fields']['field_scenario_time_horizon']['table'] = 'field_data_field_scenario_time_horizon';
  $handler->display->display_options['fields']['field_scenario_time_horizon']['field'] = 'field_scenario_time_horizon';
  $handler->display->display_options['fields']['field_scenario_time_horizon']['label'] = '';
  $handler->display->display_options['fields']['field_scenario_time_horizon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scenario_time_horizon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_scenario_time_horizon']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_scenario_time_horizon']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scenario' => 'scenario',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['description'] = 'Full text search for scenario titles and descriptions.';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Subject and Keywords (field_scenario_subject) */
  $handler->display->display_options['filters']['field_scenario_subject_tid']['id'] = 'field_scenario_subject_tid';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['table'] = 'field_data_field_scenario_subject';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['field'] = 'field_scenario_subject_tid';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['value'] = '';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_scenario_subject_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['operator_id'] = 'field_scenario_subject_tid_op';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['label'] = 'Filter by subject';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['description'] = 'Separate multiple subjects with a comma.';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['operator'] = 'field_scenario_subject_tid_op';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['identifier'] = 'field_scenario_subject_tid';
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_subject_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_scenario_subject_tid']['vocabulary'] = 'subject';
  /* Filter criterion: Content: Place name (field_scenario_location) */
  $handler->display->display_options['filters']['field_scenario_location_tid']['id'] = 'field_scenario_location_tid';
  $handler->display->display_options['filters']['field_scenario_location_tid']['table'] = 'field_data_field_scenario_location';
  $handler->display->display_options['filters']['field_scenario_location_tid']['field'] = 'field_scenario_location_tid';
  $handler->display->display_options['filters']['field_scenario_location_tid']['value'] = '';
  $handler->display->display_options['filters']['field_scenario_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_scenario_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['operator_id'] = 'field_scenario_location_tid_op';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['label'] = 'Filter by location';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['description'] = 'Separate multiple place names with a comma.';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['operator'] = 'field_scenario_location_tid_op';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['identifier'] = 'field_scenario_location_tid';
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_scenario_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_scenario_location_tid']['vocabulary'] = 'location';
  /* Filter criterion: Content: Time Horizon -  start date (field_scenario_time_horizon) */
  $handler->display->display_options['filters']['field_scenario_time_horizon_value']['id'] = 'field_scenario_time_horizon_value';
  $handler->display->display_options['filters']['field_scenario_time_horizon_value']['table'] = 'field_data_field_scenario_time_horizon';
  $handler->display->display_options['filters']['field_scenario_time_horizon_value']['field'] = 'field_scenario_time_horizon_value';
  $handler->display->display_options['filters']['field_scenario_time_horizon_value']['operator'] = 'not empty';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Filter by time horizon';
  $handler->display->display_options['filters']['date_filter']['expose']['description'] = 'Displays all scenarios with a time horizon within the range specified.';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value' => 'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value',
    'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value2' => 'field_data_field_scenario_time_horizon.field_scenario_time_horizon_value2',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Filter by publish date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['description'] = 'Displays all scenarios with a publish date between the range specified.';
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_scenario_date.field_scenario_date_value' => 'field_data_field_scenario_date.field_scenario_date_value',
  );

  /* Display: Timeline scenario pane */
  $handler = $view->new_display('panel_pane', 'Timeline scenario pane', 'discover_mode_time');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['timeline_scenarios'] = $view;

  return $export;
}
