(function($){
    $(function(){
        $(".view-rental-detail .views-field-field-photos ul").slick({
            slide: 'li',
            dots: false,
            arrows: false,
            slidesToShow: 1,
            slidesToScroll: 1,
            fade: true,
            swipe: false
        });
        $(".view-rental-detail .views-field-field-photos-1 ul").slick({
            slide: 'li',
            dots: false,
            arrows: false,
            slidesToShow: 5,
            slidesToScroll: 1,
            focusOnSelect: true,
            vertical: true,
            swipe: false,
            asNavFor: '.view-rental-detail .views-field-field-photos ul'
        });
        
        $(".view-rental-detail .views-field-field-photos li").zoom();
        $(".view-rental-detail .views-field-field-photos")
        .append("<div class='cover'><div class='click-to-zoom'>click to zoom</div></div>")
        .on("click", ".cover", function(event){
            $(".view-rental-detail .cover").remove();
            var e = $.Event('mouseover');
            e.pageX = event.pageX;
            e.pageY = event.pageY;
            $(".view-rental-detail .views-field-field-photos li").trigger(e);
        })
    });
})(jQuery);
