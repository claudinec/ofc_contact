<?php
/**
 * @file
 * ofc_contact.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ofc_contact_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact-blocks';
  $context->description = 'Blocks to display on Contact page';
  $context->tag = 'contact';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-phone' => array(
          'module' => 'boxes',
          'delta' => 'phone',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-also_on' => array(
          'module' => 'boxes',
          'delta' => 'also_on',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on Contact page');
  t('contact');
  $export['contact-blocks'] = $context;

  return $export;
}
