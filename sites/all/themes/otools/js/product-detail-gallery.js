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
    });
})(jQuery);
