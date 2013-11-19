(function ($) {
  /**
   * Use Javascript for progressive enhacement on the scenario node form
   */
  Drupal.behaviors.enhanceScenarioForm = {
    attach: function(context, settings) {
      // add form js here
      $("a.mode-quick").click(function() {
        var title = $("#edit-title").val();
        var source = $("#edit-field-scenario-source-und-0-value").val();
        var titleTrimmed = $.trim(title);
        var editTitle = "";
        var sourceTrimmed = $.trim(source);
        var editSource = "";
        // alert("Just took over quick mode. Your title is: "+source);
        if (!window.location.origin)
          window.location.origin = window.location.protocol+"//"+window.location.host;
        var base = window.location.origin;
        var path = "/node/add/scenario/quick";
        // create query string elements
        if (titleTrimmed) {
          editTitle = "?edit[title]="+encodeURIComponent(titleTrimmed);
          editSource += "&";
        } else {
          editSource += "?";
        }
        if (sourceTrimmed) {
          editSource += "edit[field_scenario_source][und][0][value]="+encodeURIComponent(source);
        } else {
          editSource = "";
        }
        // window.location.href = base+path+"?edit[title]="+encodeURIComponent(title)+"&edit[field_scenario_source][und][0][value]="+encodeURIComponent(source);
        window.location.href = base+path+editTitle+editSource;
        return false;
      });
      $("a.mode-expanded").click(function() {
        var title = $("#edit-title").val();
        var source = $("#edit-field-scenario-source-und-0-value").val();
        var titleTrimmed = $.trim(title);
        var editTitle = "";
        var sourceTrimmed = $.trim(source);
        var editSource = "";
        // alert("Just took over quick mode. Your title is: "+source);
        if (!window.location.origin)
          window.location.origin = window.location.protocol+"//"+window.location.host;
        var base = window.location.origin;
        var path = "/node/add/scenario";
        // create query string elements
        if (titleTrimmed) {
          editTitle = "?edit[title]="+encodeURIComponent(titleTrimmed);
          editSource += "&";
        } else {
          editSource += "?";
        }
        if (sourceTrimmed) {
          editSource += "edit[field_scenario_source][und][0][value]="+encodeURIComponent(source);
        } else {
          editSource = "";
        }
        // window.location.href = base+path+"?edit[title]="+encodeURIComponent(title)+"&edit[field_scenario_source][und][0][value]="+encodeURIComponent(source);
        window.location.href = base+path+editTitle+editSource;
        return false;
      });
    }
  }
})(jQuery);
