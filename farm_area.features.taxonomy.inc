<?php
/**
 * @file
 * farm_area.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function farm_area_taxonomy_default_vocabularies() {
  return array(
    'farm_areas' => array(
      'name' => 'Fields/Beds',
      'machine_name' => 'farm_areas',
      'description' => 'Distinct fields or beds that crops are planted into.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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