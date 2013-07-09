<?php
/**
 * @file
 * dsm_oauth.oauth.inc
 */

/**
 * Implements hook_default_oauth_common_context().
 */
function dsm_oauth_default_oauth_common_context() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 1;
  $context->name = 'api';
  $context->title = 'api';
  $context->authorization_options = array(
    'access_token_lifetime' => NULL,
    'page_title' => NULL,
    'message' => NULL,
    'warning' => NULL,
    'deny_access_title' => NULL,
    'grant_access_title' => NULL,
    'disable_auth_level_selection' => NULL,
    'signature_methods' => array(
      0 => 'HMAC-SHA1',
    ),
    'default_authorization_levels' => array(
      0 => 'Yuuuup',
    ),
  );
  $context->authorization_levels = array(
    'Yuuuup' => array(
      'name' => 'Yuuuup',
      'title' => 'Yuuuup',
      'default' => 1,
      'delete' => 0,
      'description' => 'Yuuuup',
    ),
  );
  $export['api'] = $context;

  return $export;
}
