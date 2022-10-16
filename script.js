var mapOptions = {
    center: [17.385044, 78.486671],
    zoom: 10
 }
 var map = new L.map('map', mapOptions);

 var layer = new L.TileLayer('http://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png');
 map.addLayer(layer);
 

 var markerOptions = {
    title: "MyLocation",
    clickable: true,
    draggable: true
 }
 var marker = L.marker([17.385044, 78.486671], markerOptions).addTo(map);
 
 // Adding marker to the map
//  marker.addTo(map);