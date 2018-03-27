(function($){
  $(function(){
      $(".view-home-carts .view-content").slick({
          slide: '.views-row',
          dots: false,
          arrows: true,
          autoplay: false,
          slidesToShow: 4,
          responsive: [
            {
              breakpoint: 860,
              settings: {
                slidesToShow: 3
              }
            },
            {
              breakpoint: 640,
              settings: {
                slidesToShow: 2
              }
            },
            {
              breakpoint: 480,
              settings: {
                slidesToShow: 1
              }
            }
          ]
      });
  });
})(jQuery);
