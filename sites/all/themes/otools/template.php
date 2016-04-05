<?php
function otools_preprocess_html(&$variables)
{
    $path = drupal_get_path_alias($_GET['q']);
    $aliases = explode('/', $path);
    foreach($aliases as $alias)
    {
        $variables['classes_array'][] = 'path-'.drupal_clean_css_identifier($alias);
    }
}

function otools_preprocess_page(&$variables, $hook)
{
    drupal_add_library('system','effects');
    
    $googleMapsAPIKey = 'AIzaSyACtFt_yL68u3tLOxgLT1D4niFu5b4CIQI';
	drupal_add_js("https://maps.googleapis.com/maps/api/js?key=$googleMapsAPIKey", 'external');
}
