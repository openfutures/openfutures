<?php
/**
 * @file
 * library_content_moderation.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function library_content_moderation_taxonomy_default_vocabularies() {
  return array(
    'abuse_categories' => array(
      'name' => 'Abuse categories',
      'machine_name' => 'abuse_categories',
      'description' => 'Categories for content moderation.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
