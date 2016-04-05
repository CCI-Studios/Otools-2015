(function($) {
    $(function(){
        if ($(".gmap").length)
        {
            createMap();
        }
    });

    function createMap()
    {
        var mapOptions = {
            zoom: 13,
            center: new google.maps.LatLng(43.1105019, -81.9860219),
            scrollwheel: false
        }
        var map = new google.maps.Map($(".gmap").get(0), mapOptions);
        var address = '7977 Rawlings Road, Forest ON N0N 1J0';
        var geocoder = new google.maps.Geocoder();
        geocoder.geocode({'address':address},
        function(results, status){
            if (status == google.maps.GeocoderStatus.OK) {
                map.setCenter(results[0].geometry.location);
                console.log(results[0].geometry.location);

                var infowindow = new google.maps.InfoWindow({
                    content: '<b>' + address + '</b>',
                    maxWidth: 150
                });

                var marker = new google.maps.Marker({
                    position: results[0].geometry.location,
                    map: map,
                    title: address
                });
                google.maps.event.addListener(marker, 'click', function() {
                    infowindow.open(map, marker);
                });
            }
        });
    }
}(jQuery));
