<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function legislation_taxonomy_default_vocabularies() {
  return array(
    'legislative_session' => array(
      'name' => 'Legislative Session',
      'machine_name' => 'legislative_session',
      'description' => 'For example: "2009 - 2010" or "112th Congress, 1st Session" or "187th General Court"',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          '0' => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            '0' => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            '0' => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
