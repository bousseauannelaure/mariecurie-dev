<?php
/**
 * @file
 * components_content_type_controler.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function components_content_type_controler_taxonomy_default_vocabularies() {
  return array(
    'section' => array(
      'name' => 'Module Section',
      'machine_name' => 'section',
      'description' => 'Module related section',
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
