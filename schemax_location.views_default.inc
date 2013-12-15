<?php
/**
 * @file
 * schemax_location.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function schemax_location_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'schemax_map_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Map View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_schemax_playing_surfaces_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'title_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_schemax_location_types_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_schemax_geo',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
    'style_field' => '',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Location Map */
  $handler->display->display_options['fields']['field_schemax_geo']['id'] = 'field_schemax_geo';
  $handler->display->display_options['fields']['field_schemax_geo']['table'] = 'field_data_field_schemax_geo';
  $handler->display->display_options['fields']['field_schemax_geo']['field'] = 'field_schemax_geo';
  $handler->display->display_options['fields']['field_schemax_geo']['label'] = '';
  $handler->display->display_options['fields']['field_schemax_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schemax_geo']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_schemax_geo']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'schemax_location' => 'schemax_location',
  );
  /* Filter criterion: Content: Playing Surfaces (field_schemax_playing_surfaces) */
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['id'] = 'field_schemax_playing_surfaces_tid';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['table'] = 'field_data_field_schemax_playing_surfaces';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['field'] = 'field_schemax_playing_surfaces_tid';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['operator_id'] = 'field_schemax_playing_surfaces_tid_op';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['label'] = 'Playing Surface';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['description'] = 'Pick one or more';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['operator'] = 'field_schemax_playing_surfaces_tid_op';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['identifier'] = 'field_schemax_playing_surfaces_tid';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['vocabulary'] = 'playing_surfaces';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Location name';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Enter part or all of the location name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Location Type (field_schemax_location_types) */
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['id'] = 'field_schemax_location_types_tid';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['table'] = 'field_data_field_schemax_location_types';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['field'] = 'field_schemax_location_types_tid';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['operator_id'] = 'field_schemax_location_types_tid_op';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['label'] = 'Location Type';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['description'] = 'Selection one or locations';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['operator'] = 'field_schemax_location_types_tid_op';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['identifier'] = 'field_schemax_location_types_tid';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['vocabulary'] = 'location_types';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page_map');
  $handler->display->display_options['display_description'] = 'Geodata presented as a map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'schemax_map_view';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Location name';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = 'Enter part or all of the location name';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Location Type (field_schemax_location_types) */
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['id'] = 'field_schemax_location_types_tid';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['table'] = 'field_data_field_schemax_location_types';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['field'] = 'field_schemax_location_types_tid';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['operator_id'] = 'field_schemax_location_types_tid_op';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['label'] = 'Location Type';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['operator'] = 'field_schemax_location_types_tid_op';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['identifier'] = 'field_schemax_location_types_tid';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_schemax_location_types_tid']['vocabulary'] = 'location_types';
  /* Filter criterion: Content: Playing Surfaces (field_schemax_playing_surfaces) */
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['id'] = 'field_schemax_playing_surfaces_tid';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['table'] = 'field_data_field_schemax_playing_surfaces';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['field'] = 'field_schemax_playing_surfaces_tid';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['operator_id'] = 'field_schemax_playing_surfaces_tid_op';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['label'] = 'Playing surface';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['operator'] = 'field_schemax_playing_surfaces_tid_op';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['identifier'] = 'field_schemax_playing_surfaces_tid';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_schemax_playing_surfaces_tid']['vocabulary'] = 'playing_surfaces';
  $handler->display->display_options['path'] = 'locations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Map (raw data) */
  $handler = $view->new_display('page', 'Map (raw data)', 'page_map_raw');
  $handler->display->display_options['display_description'] = 'Geodata presented in raw format';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'map-raw';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Map (raw data)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['schemax_map_view'] = $view;

  return $export;
}
