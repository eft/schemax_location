<?php
/**
 * @file
 * schemax_location.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function schemax_location_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-schemax_location-field_schemax_geo'
  $field_instances['node-schemax_location-field_schemax_geo'] = array(
    'bundle' => 'schemax_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'map_preset' => 'schemax_geofield_formatter_map',
        ),
        'type' => 'geofield_openlayers',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_schemax_geo',
    'label' => 'Location Map',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers',
      'settings' => array(
        'allow_edit' => 1,
        'data_storage' => 'single',
        'feature_types' => array(
          'path' => 'path',
          'point' => 'point',
          'polygon' => 'polygon',
        ),
        'openlayers_map' => 'schemax_geofield_widget_map',
      ),
      'type' => 'geofield_openlayers',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-schemax_location-field_schemax_location_types'
  $field_instances['node-schemax_location-field_schemax_location_types'] = array(
    'bundle' => 'schemax_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_schemax_location_types',
    'label' => 'Location Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Location Map');
  t('Location Type');

  return $field_instances;
}
