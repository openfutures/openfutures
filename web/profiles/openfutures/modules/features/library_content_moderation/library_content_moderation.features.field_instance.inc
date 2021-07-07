<?php
/**
 * @file
 * library_content_moderation.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function library_content_moderation_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'flagging-mark_as_abusive-field_moderation_abuse_category'
  $field_instances['flagging-mark_as_abusive-field_moderation_abuse_category'] = array(
    'bundle' => 'mark_as_abusive',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'flagging',
    'fences_wrapper' => 'div',
    'field_name' => 'field_moderation_abuse_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'flagging-mark_as_duplicate-field_moderation_duplicate'
  $field_instances['flagging-mark_as_duplicate-field_moderation_duplicate'] = array(
    'bundle' => 'mark_as_duplicate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add the URL for the duplicate content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'flagging',
    'fences_wrapper' => 'div',
    'field_name' => 'field_moderation_duplicate',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'flagging-mark_as_inaccurate-field_moderation_reason'
  $field_instances['flagging-mark_as_inaccurate-field_moderation_reason'] = array(
    'bundle' => 'mark_as_inaccurate',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please explain how the content is inaccurate.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'flagging',
    'fences_wrapper' => 'div',
    'field_name' => 'field_moderation_reason',
    'label' => 'Reason',
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add the URL for the duplicate content.');
  t('Category');
  t('Please explain how the content is inaccurate.');
  t('Reason');
  t('URL');

  return $field_instances;
}
