<?php
/**
 * @file
 * ascm_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ascm_rules_default_rules_configuration() {
  $items = array();
  $items['rules_new_comment_email'] = entity_import('rules_config', '{ "rules_new_comment_email" : {
      "LABEL" : "New comment email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "comments", "email" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "webw@ascm.org.au",
            "subject" : "New comment received at [site:name]",
            "message" : "Comment from: [comment:name]\\r\\n\\r\\nURL: [comment:url]\\r\\n\\r\\nComment:\\r\\n\\r\\n[comment:comment-body]\\r\\n\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
