<?php
/**
 * @file
 * schemax_location.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function schemax_location_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'schemaxtest';
  $openlayers_styles->title = 'schemaxTest';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'pointRadius' => 6,
    'fillColor' => '#33FF33',
    'fillOpacity' => 0.5,
    'strokeColor' => '#FFFFFF',
    'strokeWidth' => 2,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['schemaxtest'] = $openlayers_styles;

  return $export;
}
