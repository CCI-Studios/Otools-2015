(function($){
    var $pageWrapper;
    var $mainWrapper;
    
    $(function(){
        $pageWrapper = $(".page-wrapper");
        $mainWrapper = $(".main-wrapper");
        
        resize();
        $(window).load(resize);
        $(window).resize(resize);
    });
    
    function resize() {
        if ($pageWrapper.outerHeight() < $(window).height()) {
            var diff = $(window).height() - $pageWrapper.outerHeight();
            $mainWrapper.css("min-height", $mainWrapper.height() + diff);
        }
    }
    
})(jQuery);
