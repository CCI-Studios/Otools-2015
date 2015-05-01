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
?>
