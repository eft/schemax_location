/*******************************************************
 *  Schemax Location JavaScript functionality
 *
 */
(function($) {
  Drupal.behaviors.schemax_location = {
    attach: function(context) {

      // Sometimes, when using Google base maps the data overlay is inserted
      // into the wrong part of the DOM causing it to appear lower in the page
      // than the base map. This is apparently due to an issue with the GMaps API.
      // See https://github.com/openlayers/openlayers/issues/1275
      // This function checks if the location of the overlay is incorrect and
      // moves it as necessary.
      $(window).bind('load', function() {
        // Define the container for the basemap and overlay
        var foreignContainer = $(".olForeignContainer");
        // Check if the overlay is a sibling of the basemap
        var overlayAsSibling = foreignContainer.siblings($("#OpenLayers_Map_2_OpenLayers_ViewPort"));
        if (overlayAsSibling.length > 0) {
          // Move the overlay inside the container
          overlayAsSibling.appendTo(foreignContainer);
        }
      });
    }
  }
})(jQuery);