(function ($) {
  Drupal.behaviors.selectmenu = {
    attach: function (context, settings) {
      $('select').selectmenu({style:'dropdown'});
    }
  };
}(jQuery));


