(function($){
  $(function(){
      $('.view-rental-detail .collapsible-field h2 a').on('click', function (e) {
        e.preventDefault()
        $(this).closest('.collapsible-field').toggleClass('open')
      })
  });
})(jQuery);
