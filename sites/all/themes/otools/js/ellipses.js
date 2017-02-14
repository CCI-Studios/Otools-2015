(function($){
    $(function(){
        $(".view-listings .views-field-title").each(function(){
          if ($(this).text().length > 75) {
            $(this).attr("title", $(this).text());
            $(this).text($(this).text().substr(0,74) + "...");
          }
        });
    });
})(jQuery);
