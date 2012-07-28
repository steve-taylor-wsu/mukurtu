<?php
/**
 * @file
 * ma_collection.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ma_collection_taxonomy_default_vocabularies() {
  return array(
    'ma_collection_type' => array(
      'name' => 'Collection Type',
      'machine_name' => 'ma_collection_type',
      'description' => 'Type of Collection of Digital Heritage Materials',
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
