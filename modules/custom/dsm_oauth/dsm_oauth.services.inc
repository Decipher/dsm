<?php
/**
 * @file
 * dsm_oauth.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function dsm_oauth_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'dsm_oauth';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api2';
  $endpoint->authentication = array(
    'services_oauth' => array(
      'oauth_context' => 'api',
      'credentials' => 'token',
      'authorization' => '',
    ),
  );
  $endpoint->server_settings = array(
    'formatters' => array(
      'json' => TRUE,
      'bencode' => FALSE,
      'jsonp' => FALSE,
      'php' => FALSE,
      'xml' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => FALSE,
      'application/x-www-form-urlencoded' => FALSE,
      'application/xml' => FALSE,
      'multipart/form-data' => FALSE,
      'text/xml' => FALSE,
    ),
  );
  $endpoint->resources = array(
    'node' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => 'none',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['dsm_oauth'] = $endpoint;

  return $export;
}
