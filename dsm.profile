<?php
/**
 * @file
 * Enables modules and site configuration for a Drupal Services Me ;) presentation installation.
 */

/**
 * Include for Profiler library.
 */
!function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
profiler_v2('dsm');

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function dsm_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name.
  $form['site_information']['site_name']['#default_value'] = 'Drupal Services Me ;)';
}
