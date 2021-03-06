<?php
/**
 * @file
 * library_content_moderation.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function library_content_moderation_default_rules_configuration() {
  $items = array();
  $items['rules_scenario_marked_as_abusive'] = entity_import('rules_config', '{ "rules_scenario_marked_as_abusive" : {
      "LABEL" : "Scenario marked as abusive",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Content moderation", "Flag", "Scenario" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_mark_as_abusive" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "The scenario \\u003Ca href=\\u0022[flagged-node:url]\\u0022\\u003E[flagged-node:title]\\u003C\\/a\\u003E just got marked as abuse by [flagging-user:name]. See \\u003Ca href=\\u0022[flagged-node:url]#comments\\u0022\\u003Ediscussion\\u003C\\/a\\u003E for details." } },
        { "entity_create" : {
            "USING" : {
              "type" : "comment",
              "param_subject" : "Scenario marked as abusive",
              "param_node" : [ "flagged-node" ],
              "param_author" : "1",
              "param_comment_body" : { "value" : { "value" : "[comment-body-message:value]", "format" : "full_html" } }
            },
            "PROVIDE" : { "entity_created" : { "admin_comment" : "Comment with message" } }
          }
        },
        { "data_set" : {
            "data" : [ "admin-comment:comment-body:value" ],
            "value" : "[moderation notice] [flagging-user:name] marked this scenario as abuse under the category: [flagging:field_moderation_abuse_category]"
          }
        },
        { "mail" : {
            "to" : "[flagging-user:mail]",
            "subject" : "Open Futures - You just flagged some content for abuse",
            "message" : "Hi [flagging-user:name],\\r\\n\\r\\nJust letting you know that we got your moderation flag.\\r\\n\\r\\nThanks,\\r\\nOpen Futures team.",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Open Futures - scenario marked as abuse",
            "message" : "[flagging-user:name] flagged [flagged-node:url] as abuse.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_scenario_marked_as_duplicate'] = entity_import('rules_config', '{ "rules_scenario_marked_as_duplicate" : {
      "LABEL" : "Scenario marked as duplicate",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Content moderation", "Flag", "Scenario" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_mark_as_duplicate" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "The scenario \\u003Ca href=\\u0022[flagged-node:url]\\u0022\\u003E[flagged-node:title]\\u003C\\/a\\u003E just got marked as duplicate by [flagging-user:name]. See \\u003Ca href=\\u0022[flagged-node:url]#comments\\u0022\\u003Ediscussion\\u003C\\/a\\u003E for details. " } },
        { "entity_create" : {
            "USING" : {
              "type" : "comment",
              "param_subject" : "Scenario marked as duplicate",
              "param_node" : [ "flagged-node" ],
              "param_author" : "1",
              "param_comment_body" : { "value" : { "value" : "[comment-body-message:value]", "format" : "full_html" } }
            },
            "PROVIDE" : { "entity_created" : { "admin_comment" : "Comment with message" } }
          }
        },
        { "data_set" : {
            "data" : [ "admin-comment:comment-body:value" ],
            "value" : "[moderation notice] [flagging-user:name] marked this scenario a duplicate of: [flagging:field_moderation_duplicate]"
          }
        },
        { "mail" : {
            "to" : "[flagging-user:mail]",
            "subject" : "Open Futures - You just flagged some content as a duplicate",
            "message" : "Hi [flagging-user:name],\\r\\n\\r\\nJust letting you know that we got your duplicate flag.\\r\\n\\r\\nThanks,\\r\\nOpen Futures team.",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Open Futures - scenario marked as duplicate",
            "message" : "[flagging-user:name] flagged [flagged-node:url] as a duplicate.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_scenario_marked_as_inaccurate'] = entity_import('rules_config', '{ "rules_scenario_marked_as_inaccurate" : {
      "LABEL" : "Scenario marked as inaccurate",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Content moderation", "Flag", "Scenario" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_mark_as_inaccurate" : [] },
      "DO" : [
        { "drupal_message" : { "message" : "The scenario \\u003Ca href=\\u0022[flagged-node:url]\\u0022\\u003E[flagged-node:title]\\u003C\\/a\\u003E just got marked as inaccurate by [flagging-user:name]. See \\u003Ca href=\\u0022[flagged-node:url]#comments\\u0022\\u003Ediscussion\\u003C\\/a\\u003E for details." } },
        { "entity_create" : {
            "USING" : {
              "type" : "comment",
              "param_subject" : "Scenario marked as inaccurate",
              "param_node" : [ "flagged-node" ],
              "param_author" : "1",
              "param_comment_body" : { "value" : { "value" : "[comment-body-message:value]", "format" : "full_html" } }
            },
            "PROVIDE" : { "entity_created" : { "admin_comment" : "Comment with message" } }
          }
        },
        { "data_set" : {
            "data" : [ "admin-comment:comment-body:value" ],
            "value" : "[moderation notice] [flagging-user:name] marked this scenario as inaccurate citing the reason: [flagging:field_moderation_reason]"
          }
        },
        { "mail" : {
            "to" : "[flagging-user:mail]",
            "subject" : "Open Futures - You just flagged some content for inaccuracies",
            "message" : "Hi [flagging-user:name],\\r\\n\\r\\nJust letting you know that we got your inaccurate flag.\\r\\n\\r\\nThanks,\\r\\nOpen Futures team.",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Open Futures - scenario marked as inaccurate",
            "message" : "[flagging-user:name] flagged [flagged-node:url] as inaccurate.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
