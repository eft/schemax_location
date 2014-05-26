<?php
/**
 * @file
 * schemax_location.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function schemax_location_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:schemax_location:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'schemax_location';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '97be34d1-2618-454b-a1c3-68a197ff5f81';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ea9ce5c2-0179-4b93-9874-c961f4e07b5e';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_schemax_geo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'geofield_openlayers',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'data' => 'full',
        'map_preset' => 'schemax_geofield_formatter_map',
        'empty_fields_handler' => '',
        'empty_fields_emptyfieldtext_empty_text' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ea9ce5c2-0179-4b93-9874-c961f4e07b5e';
    $display->content['new-ea9ce5c2-0179-4b93-9874-c961f4e07b5e'] = $pane;
    $display->panels['left'][0] = 'new-ea9ce5c2-0179-4b93-9874-c961f4e07b5e';
    $pane = new stdClass();
    $pane->pid = 'new-8b1b5a3c-bbec-4128-87eb-99a987d10a3e';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_schemax_location_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'empty_fields_handler' => '',
        'empty_fields_emptyfieldtext_empty_text' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8b1b5a3c-bbec-4128-87eb-99a987d10a3e';
    $display->content['new-8b1b5a3c-bbec-4128-87eb-99a987d10a3e'] = $pane;
    $display->panels['left'][1] = 'new-8b1b5a3c-bbec-4128-87eb-99a987d10a3e';
    $pane = new stdClass();
    $pane->pid = 'new-17dd14de-9037-4b52-9638-448e51f2e8ed';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_schemax_playing_surfaces';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'empty_fields_handler' => '',
        'empty_fields_emptyfieldtext_empty_text' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '17dd14de-9037-4b52-9638-448e51f2e8ed';
    $display->content['new-17dd14de-9037-4b52-9638-448e51f2e8ed'] = $pane;
    $display->panels['left'][2] = 'new-17dd14de-9037-4b52-9638-448e51f2e8ed';
    $pane = new stdClass();
    $pane->pid = 'new-b7e10860-e47d-42af-9670-25efd5428955';
    $pane->panel = 'left';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b7e10860-e47d-42af-9670-25efd5428955';
    $display->content['new-b7e10860-e47d-42af-9670-25efd5428955'] = $pane;
    $display->panels['left'][3] = 'new-b7e10860-e47d-42af-9670-25efd5428955';
    $pane = new stdClass();
    $pane->pid = 'new-7e8e76a2-7d94-43c4-8ba9-3d2c92807e96';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_location_events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e8e76a2-7d94-43c4-8ba9-3d2c92807e96';
    $display->content['new-7e8e76a2-7d94-43c4-8ba9-3d2c92807e96'] = $pane;
    $display->panels['right'][0] = 'new-7e8e76a2-7d94-43c4-8ba9-3d2c92807e96';
    $pane = new stdClass();
    $pane->pid = 'new-d70a3993-418e-49d2-a7e4-48438ca928a7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_location_calendars-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd70a3993-418e-49d2-a7e4-48438ca928a7';
    $display->content['new-d70a3993-418e-49d2-a7e4-48438ca928a7'] = $pane;
    $display->panels['right'][1] = 'new-d70a3993-418e-49d2-a7e4-48438ca928a7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ea9ce5c2-0179-4b93-9874-c961f4e07b5e';
  $panelizer->display = $display;
  $export['node:schemax_location:default:default'] = $panelizer;

  return $export;
}
