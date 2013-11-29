<?php
/**
 * @file
 * schemax_mapping.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_mapping_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function schemax_mapping_node_info() {
  $items = array(
    'schemax_location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('A location defined by a point or area on a map.'),
      'has_title' => '1',
      'title_label' => t('Location Name'),
      'help' => '',
    ),
  );
  return $items;
}
