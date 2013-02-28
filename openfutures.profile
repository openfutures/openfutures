<?php

/**
 * Implements hook_form_FORM_ID_alter()
 */
function openfutures_form_install_configure_form_alter(&$form, $form_state) {
  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'Open Futures';
}
