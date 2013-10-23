(function ($) {
  /**
   * Use Javascript for progressive enhacement on the scenario node form
   */
  Drupal.behaviors.enhanceScenarioForm = {
    attach: function(context, settings) {
      // add form js here
      $("a.mode-quick").click(function() {
        var raw_title = $("#edit-title").val();
        var title = $.trim(raw_title);
        var raw_source = $("#edit-field-scenario-source-und-0-value").val();
        var source = $.trim(raw_source);
        // alert("Just took over quick mode. Your title is: "+source);
        if (!window.location.origin)
          window.location.origin = window.location.protocol+"//"+window.location.host;
        var base = window.location.origin;
        var path = "/node/add/scenario/quick";
        var query_string = '';

        // window.location.href = base+path+"?edit[title]="+encodeURIComponent(title)+"&edit[field_scenario_source][und][0][value]="+encodeURIComponent(source);
        window.location.href = base+path+query_string;
        return false;
      });
      $("a.mode-expanded").click(function() {
        var title = $("#edit-title").val();
        var source = $("#edit-field-scenario-source-und-0-value").val();
        // alert("Just took over quick mode. Your title is: "+source);
        if (!window.location.origin)
          window.location.origin = window.location.protocol+"//"+window.location.host;
        var base = window.location.origin;
        var path = "/node/add/scenario";
        window.location.href = base+path+"?edit[title]="+encodeURIComponent(title)+"&edit[field_scenario_source][und][0][value]="+encodeURIComponent(source);
        return false;
      });
      // when the checkbox is changed, see if it is checked, if it's checked,
      // clear the value of the location and update the placeholder attribute
      var updateLocation = function() {
        var c = $("#edit-field-scenario-global-und").attr("checked");
        if (c) {
          $("#edit-field-scenario-location-und").val("");
          $("#edit-field-scenario-location-und").attr( "placeholder", "Place names disabled due to global checkbox." );
        } else {
          // global scenario was just unchecked. If we saved an value update the
          // element, otherwise put the original placeholder text back.
          $("#edit-field-scenario-location-und").val("");
          $("#edit-field-scenario-location-und").attr( "placeholder", "Enter place names separated by a comma..." );
        }
      };
      $("#edit-field-scenario-global-und").change(updateLocation);
    }
  }
})(jQuery);
