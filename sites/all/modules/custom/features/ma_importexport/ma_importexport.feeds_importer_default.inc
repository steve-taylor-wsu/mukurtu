<?php
/**
 * @file
 * ma_importexport.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ma_importexport_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'digital_heritage_metadata';
  $feeds_importer->config = array(
    'name' => 'Import Digital Heritage Metadata',
    'description' => 'Import metadata associated with Digital Heritage items.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
        'allowed_extensions' => 'csv',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'digital_heritage',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'Category',
            'target' => 'field_category',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Sharing Protocols',
            'target' => 'group_content_access',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Keywords',
            'target' => 'field_tags',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Creator',
            'target' => 'field_creator',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Contributor',
            'target' => 'field_contributor',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Date',
            'target' => 'field_date',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Description',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Format',
            'target' => 'field_format',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Identifier',
            'target' => 'field_identifier',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Language',
            'target' => 'field_language',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Publisher',
            'target' => 'field_publisher',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Rights',
            'target' => 'field_rights',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Source',
            'target' => 'field_source',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Subject',
            'target' => 'field_subject',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Traditional Knowledge',
            'target' => 'field_tk_body',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Cultural Narrative',
            'target' => 'body',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Sharing Protocols',
            'target' => 'group_content_access',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Latitude',
            'target' => 'field_coverage:lat',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Longitude',
            'target' => 'field_coverage:lon',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Location Description',
            'target' => 'field_coverage_description',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Media Internet',
            'target' => 'field_media',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Media',
            'target' => 'field_media:MediaFeedsLibraryProvider',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Communities',
            'target' => 'field_communities:title',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'Cultural Protocols',
            'target' => 'field_culturalprotocol:title',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'Related Items',
            'target' => 'field_relation:title',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          29 => array(
            'source' => 'Traditional Licensing URL',
            'target' => 'field_licence_trad',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'Standard and Creative Commons Licensing URL',
            'target' => 'field_licence_std_cc',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'full_html',
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['digital_heritage_metadata'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_digital_heritage_metadata_xml';
  $feeds_importer->config = array(
    'name' => 'Import Digital Heritage Metadata XML',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
        'allowed_extensions' => 'xml rss',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(),
        'rawXML' => array(),
        'context' => '',
        'exp' => array(
          'errors' => FALSE,
          'tidy' => FALSE,
          'debug' => array(),
          'tidy_encoding' => 'UTF8',
        ),
        'allow_override' => TRUE,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'digital_heritage',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'Category',
            'target' => 'field_category',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Sharing-Protocols',
            'target' => 'group_content_access',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Keywords',
            'target' => 'field_tags',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Creator',
            'target' => 'field_creator',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Contributor',
            'target' => 'field_contributor',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Date',
            'target' => 'field_date',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Description',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Format',
            'target' => 'field_format',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Identifier',
            'target' => 'field_identifier',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Language',
            'target' => 'field_language',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Publisher',
            'target' => 'field_publisher',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Rights',
            'target' => 'field_rights',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Source',
            'target' => 'field_source',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Subject',
            'target' => 'field_subject',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Traditional-Knowledge',
            'target' => 'field_tk_body',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Cultural-Narrative',
            'target' => 'body',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Sharing-Protocols',
            'target' => 'group_content_access',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Latitude',
            'target' => 'field_coverage:lat',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Longitude',
            'target' => 'field_coverage:lon',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Location-Description',
            'target' => 'field_coverage_description',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Media-Internet',
            'target' => 'field_media',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Media',
            'target' => 'field_media:MediaFeedsLibraryProvider',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Communities',
            'target' => 'field_communities:title',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'Cultural Protocols',
            'target' => 'field_culturalprotocol:title',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'Related-Items',
            'target' => 'field_relation:title',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          29 => array(
            'source' => 'Traditional-Licensing-URL',
            'target' => 'field_licence_trad',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'Standard-and-Creative-Commons-Licensing-URL',
            'target' => 'field_licence_std_cc',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_category',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'full_html',
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_digital_heritage_metadata_xml'] = $feeds_importer;

  return $export;
}
