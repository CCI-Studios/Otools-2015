(function($){
    $(function(){
        $("#block-system-main-menu .content > ul > li > a").click(function(){
            $("#block-system-main-menu .open").not($(this).parent()).removeClass("open");
            $(this).parent().toggleClass("open");
            return false;
        });
    });
})(jQuery);
