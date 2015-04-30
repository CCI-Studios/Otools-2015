<?php
function otools_preprocess_html(&$variables)
{
    $parts = explode('/', request_path());
    if ($parts[0] == 'rentals')
    {
        $variables['classes_array'][] = 'rentals';
    }
}
?>
