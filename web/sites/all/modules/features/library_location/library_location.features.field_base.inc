<?php
/**
 * @file
 * library_location.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function library_location_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_location_point'
  $field_bases['field_location_point'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location_point',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'geofield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'geofield',
  );

  return $field_bases;
}
