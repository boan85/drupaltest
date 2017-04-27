(function ($) {
  Drupal.behaviors.selectmenu = {
    attach: function (context, settings) {
      $('select').once(function(){
          $(this).selectmenu();
      });
    }
  };
}(jQuery));


