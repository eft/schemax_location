<?php
/**
 * @file
 * schemax_location.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function schemax_location_taxonomy_default_vocabularies() {
  return array(
    'location_types' => array(
      'name' => 'Location types',
      'machine_name' => 'location_types',
      'description' => 'e.g. clubhouse, field, gym',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
