<?php
/**
 * @file
 * dsm_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dsm_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function dsm_core_views_api() {
  return array("api" => "3.0");
}
