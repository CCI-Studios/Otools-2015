(function($){
    $(function(){
        initCarousel();
        $(document).ajaxComplete(ajaxComplete);
    });
    
    function ajaxComplete(e, xhr, settings)
    {
        if (settings.url == Drupal.settings.basePath + "?q=views/ajax" || settings.url == Drupal.settings.basePath + "views/ajax" || settings.url == Drupal.settings.basePath + "?q=system/ajax" ||  settings.url == Drupal.settings.basePath + "system/ajax")
        {
            initCarousel();
        }
    }
    
    function initCarousel()
    {
        $(".view-features .view-content").slick({
            slide: '.views-row',
            dots: false,
            arrows: true,
            slidesToShow: 3
        });
    }
})(jQuery);
