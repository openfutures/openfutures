<?php
/**
 * @file
 * library_location.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function library_location_taxonomy_default_vocabularies() {
  return array(
    'location' => array(
      'name' => 'Location',
      'machine_name' => 'location',
      'description' => 'A place name or geographic area that represents the specific spatial coverage of a resource.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
