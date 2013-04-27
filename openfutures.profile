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
      'type' => 'normal',
    ),
    'openfutures_create_profile_nodes' => array(
      'display_name' => st('Create profile content'),
      'type' => 'normal',
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
 * Install task: Create profile content.
 *
 * This is a place we can create node content for things like terms and
 * conditions.
 */
function openfutures_create_profile_nodes() {
  $node = new stdClass();
  $node->type = 'web_page';
  node_object_prepare($node);
  $node->title = 'Terms & Conditions';
  $node->language = LANGUAGE_NONE;
  $node->body[LANGUAGE_NONE][0]['value'] = 'Please update your terms and conditions content.';
  $node->body[LANGUAGE_NONE][0]['format'] = 'plain_text';
  $node->uid = 1;
  node_save($node);
  drupal_set_message('my node got done: '.$node->nid);
  // Set the alias to /terms
  $path = array(
    'source' => 'node/' . $node->nid,
    'alias' => 'terms',
  );
  path_save($path);
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
