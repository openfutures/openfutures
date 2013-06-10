<?php
/**
 * @file
 * library_import.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function library_import_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__import_scenarios';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__import_scenarios'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_import_scenarios';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_import_scenarios'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_import_scenarios';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_import_scenarios'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_import_scenarios';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_import_scenarios'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_import_scenarios';
  $strongarm->value = '1';
  $export['node_preview_import_scenarios'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_import_scenarios';
  $strongarm->value = 1;
  $export['node_submitted_import_scenarios'] = $strongarm;

  return $export;
}
