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

  // Exported field_instance: 'node-import_csv-body'
  $field_instances['node-import_csv-body'] = array(
    'bundle' => 'import_csv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add information relating to your import.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add information relating to your import.');
  t('Description');

  return $field_instances;
}
