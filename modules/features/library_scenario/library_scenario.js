(function ($) {
  /**
   * Use Javascript for progressive enhacement on the scenario node form
   */
  Drupal.behaviors.enhanceScenarioForm = {
    attach: function(context, settings) {
      // add form js here
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