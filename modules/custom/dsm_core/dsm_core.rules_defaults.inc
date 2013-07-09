<?php
/**
 * @file
 * dsm_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dsm_core_default_rules_configuration() {
  $items = array();
  $items['rules_dsm_rules'] = entity_import('rules_config', '{ "rules_dsm_rules" : {
      "LABEL" : "DSM rules",
      "PLUGIN" : "rule",
      "TAGS" : [ "DSM" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "return_user" : { "label" : "Return user", "type" : "user", "parameter" : false } },
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : "1" },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : { "data" : [ "return-user" ], "value" : [ "entity-fetched" ] } }
      ],
      "PROVIDES VARIABLES" : [ "return_user" ]
    }
  }');
  return $items;
}
