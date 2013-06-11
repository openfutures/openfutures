<?php
/**
 * @file
 * library_import.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function library_import_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-import_scenarios-field_import_description'
  $field_instances['node-import_scenarios-field_import_description'] = array(
    'bundle' => 'import_scenarios',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add information relating to your import.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_import_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add information relating to your import.');
  t('Description');

  return $field_instances;
}
