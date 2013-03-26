<?php

/**
 * Implements hook_form_FORM_ID_alter()
 */
function openfutures_form_install_configure_form_alter(&$form, $form_state) {
  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'Open Futures';
}

/**
 * Implements hook_install_tasks().
 */
function openfutures_install_tasks() {
  $tasks = array(
    'openfutures_create_taxonomy_terms' => array(
      'display_name' => st('Create taxonomy terms'),
      'type' => 'normal', // the default
    ),
  );
  return $tasks;
}

/**
 * Install task: Create taxonomy terms.
 *
 * Silly Drupal, we have to create terms here because we don't have
 * access to modules in openfutures.install
 */
function openfutures_create_taxonomy_terms() {
  // Create terms to the Type vocab, http://dublincore.org/documents/dcmi-type-vocabulary/#H7
  $terms_dcmitype = _openfutures_dcmitype_terms();
  _openfutures_save_terms($terms_dcmitype, 'type');
}

/**
 * Create a new vocabulary and save some terms
 * @param $terms, an array of taxonomy terms
 * @param $vocabulary, a string representing the machine name of existing vocab
 */
function _openfutures_save_terms($terms = array(), $vocabulary = 'existing_vocab') {
// check to see that the vocabulary exists.
  if ( $vocab = taxonomy_vocabulary_machine_name_load($vocabulary) ) {
    // $terms[] = "Cats";
    // $terms[] = "Dogs";
    // $terms[] = "Mice";

    foreach ($terms as $name) {
      $term = new stdClass();
      $term->vid = $vocab->vid;
      $term->name = $name;
      taxonomy_term_save($term);
    }
  } else {
    // vocab doesn't exist, nothing happened, return false.
    return false;
  }
}

function _openfutures_dcmitype_terms() {
  return array(
    'Collection',
    'Dataset',
    'Event',
    'Image',
    'Interactive Resource',
    'Moving Image',
    'Physical Object',
    'Service',
    'Software',
    'Sound',
    'Text',
  );
}
