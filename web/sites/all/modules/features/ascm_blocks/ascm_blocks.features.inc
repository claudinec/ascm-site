<?php
/**
 * @file
 * ascm_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ascm_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function ascm_blocks_default_mailchimp_signup() {
  $items = array();
  $items['subscribe'] = entity_import('mailchimp_signup', '{
    "name" : "subscribe",
    "mc_lists" : { "bf6cbbd774" : "bf6cbbd774" },
    "mode" : "1",
    "title" : "Subscribe",
    "settings" : {
      "path" : "",
      "submit_button" : "Submit",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {"name":"Email Address","req":true,"field_type":"email","public":true,"show":true,"order":"1","default":"","helptext":"","size":"25","tag":"EMAIL","id":0},
        "FNAME" : {"name":"First Name","req":false,"field_type":"text","public":true,"show":true,"order":"2","default":"","helptext":"","size":"25","tag":"FNAME","id":1},
        "LNAME" : {"name":"Last Name","req":false,"field_type":"text","public":true,"show":true,"order":"3","default":"","helptext":"","size":"25","tag":"LNAME","id":2},
        "ADDRESS" : {"name":"Address","req":false,"field_type":"address","public":true,"show":true,"order":"5","default":"","helptext":"","size":"25","defaultcountry":"8","defaultcountry_cc":"AU","defaultcountry_name":"Australia","tag":"ADDRESS","id":3},
        "ORG" : {"name":"Organisation","req":false,"field_type":"text","public":true,"show":true,"order":"7","default":"","helptext":"","size":"25","tag":"ORG","id":4},
        "ROLE" : {"name":"Role","req":false,"field_type":"text","public":true,"show":true,"order":"8","default":"","helptext":"","size":"25","tag":"ROLE","id":5}
      },
      "description" : "Subscribe to our mailing list",
      "doublein" : 1,
      "send_welcome" : 1,
      "include_interest_groups" : 1
    },
    "rdf_mapping" : []
  }');
  return $items;
}
