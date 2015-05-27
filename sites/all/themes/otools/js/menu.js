(function($){
    $(function(){
        $("#block-system-main-menu .content ul ul").prepend("<li class='back'><a href='#'>Back</a></li>");
        $("<div class='top-menu-mobile' />").append($(".navigation .cart, .navigation .fb").clone()).insertAfter(".region-navigation");
        $("#block-system-main-menu .content").on("click touchstart", "a", menuItemClick);
        $(".btn-menu").on("click touchstart", btnMenuClick);
        $(".btn-cart-quote").on("click", btnCartQuote);
    });
    
    function isMobile()
    {
        return $(window).width() <= 750;
    }
    function menuItemClick()
    {
        if (!isMobile())
        {
            if ($(this).is("#block-system-main-menu .content > ul > li > a"))
            {
                $("#block-system-main-menu .open").not($(this).parent()).removeClass("open");
                $(this).parent().toggleClass("open");
                return false;
            }
        }
        else
        {
            if ($(this).parent().hasClass("back"))
            {
                $(this).parent().parent().parent().removeClass("open").parent().removeClass("open-child").parent().addClass("open");
                if ($(this).is("#block-system-main-menu .content > ul > li > ul > li > a"))
                {
                    $("#block-system-main-menu").removeClass("open");
                }
                return false;
            }
            else if ($(this).is(".expanded > a"))
            {
                $(this).parent().toggleClass("open")
                .parent().toggleClass("open-child")
                .parents(".open").not(".region-navigation").removeClass("open");
                $(this).parents("#block-system-main-menu").addClass("open");
                return false;
            }
        }
    }
    function btnMenuClick()
    {
        $(".region-navigation").toggleClass("open");
        $(this).toggleClass("open");
        return false;
    }
    
    function btnCartQuote()
    {
        if ($(".cart-quote").css("display") == "none")
        {
            $("html, body").animate({
                scrollTop: document.body.scrollHeight
            }, function(){
                $(".cart-quote input").first().focus();
            });
            
        }
        $(".cart-quote").slideToggle();
        return false;
    }
})(jQuery);
