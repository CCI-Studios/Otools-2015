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
        if ($pageWrapper.height() < $(window).height()) {
            var diff = $(window).height() - $pageWrapper.height();
            $mainWrapper.css("min-height", $mainWrapper.height() + diff);
        }
    }
    
})(jQuery);
