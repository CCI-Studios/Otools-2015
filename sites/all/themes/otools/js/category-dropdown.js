(function($){
    $(function(){
        $(".menu-terms-dropdown .select-category a").on("click", dropdownClick);
    });
    function dropdownClick(e) {
        var $ul = $(this).closest("ul");
        var height = $(this).parent().outerHeight();
        if ($ul.hasClass("open")) {
            //closing
            $ul.animate({"height":height});
        } else {
            //opening
            var numItems = $ul.find("li").length;
            $ul.animate({"height":height*numItems});
        }
        $ul.toggleClass("open");
        return false;
    }
})(jQuery);
