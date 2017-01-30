(function($){
    $(function(){
        $("#block-menu-menu-top-menu .search a").click(function(e){
          if ($(window).width() <= 750) {
            return;
          }
          e.preventDefault();
          var $searchform = $(".navigation .search-form")
          $searchform.animate({width:"toggle"}, 250, function(){
            if ($searchform.css("display") == "block") {
              $searchform.find("input[type=text]").focus();
            }
          });
        });
    });
})(jQuery);
