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
      "TAGS" : [ "Content moderation", "Flag", "Scenario" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_mark_as_abusive" ],
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
        }
      ]
    }
  }');
  $items['rules_scenario_marked_as_duplicate'] = entity_import('rules_config', '{ "rules_scenario_marked_as_duplicate" : {
      "LABEL" : "Scenario marked as duplicate",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Content moderation", "Flag", "Scenario" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_mark_as_duplicate" ],
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
        }
      ]
    }
  }');
  $items['rules_scenario_marked_as_inaccurate'] = entity_import('rules_config', '{ "rules_scenario_marked_as_inaccurate" : {
      "LABEL" : "Scenario marked as inaccurate",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Content moderation", "Flag", "Scenario" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : [ "flag_flagged_mark_as_inaccurate" ],
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
        }
      ]
    }
  }');
  return $items;
}
