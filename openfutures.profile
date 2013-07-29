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
    'openfutures_setup_ui' => array(
      'display_name' => st('Setup UI'),
      'type' => 'normal',
    ),
    'openfutures_setup_mail' => array(
      'display_name' => st('Setup Mail'),
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
 * Install task: Setup UI
 *
 * Create some profile specific configuration.
 */
function openfutures_setup_ui() {
  // Set site name , slogan and frontpage
  variable_set('site_name', 'Open Futures Library');
  variable_set('site_slogan', 'Engage with a Library of scenarios');
  variable_set('site_frontpage', 'engage');

  // Update hudson theme settings
  $theme_settings = _openfutures_get_theme_settings();
  variable_set('theme_hudson_settings', $theme_settings);

  // Turn on our custom node edit form
  variable_set('page_manager_node_edit_disabled', FALSE);
}

/**
 * Install task: Setup Mail
 *
 * Can't setup mail vars in .install for some reason.
 */
function openfutures_setup_mail() {
  // Setup mail options
  $mail_vars = array(
    'update_notify_emails' => array('info@openfutures.net'),
    'site_mail' => 'info@openfutures.net',
    'mail_system' => array(
      'default-system' => 'MandrillMailSystem',
      'mandrill_test' => 'MandrillMailSystem'
    ),
    'mandrill_api_key' => '4jADr1uN9GJaAvJettmS_w',
  );

  // Save mail options
  foreach ($mail_vars as $var => $value) {
    variable_set($var, $value);
  }
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

function _openfutures_get_theme_settings() {
  return array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'profiles/openfutures/themes/custom/hudson/images/openfutures-logo-scalable.svg',
    'logo_upload' => NULL,
    'default_favicon' => 1,
    'favicon_path' => NULL,
    'favicon_upload' => NULL,
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' =>  '/',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
  );
}
