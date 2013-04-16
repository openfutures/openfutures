<?php
/**
 * @file
 * library_scenario.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function library_scenario_taxonomy_default_vocabularies() {
  return array(
    'subject' => array(
      'name' => 'Subject',
      'machine_name' => 'subject',
      'description' => 'Keywords that describe the topic of the content of a resource.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'type' => array(
      'name' => 'Type',
      'machine_name' => 'type',
      'description' => 'The nature or genre of a resource.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
