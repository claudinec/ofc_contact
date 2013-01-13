<?php
/**
 * @file
 * ofc_contact.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ofc_contact_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'also_on';
  $box->plugin_key = 'simple';
  $box->title = 'You can also find me on ...';
  $box->description = 'You can also find me on';
  $box->options = array(
    'body' => array(
      'value' => '- [Twitter](https://twitter.com/claudinec)
- [Facebook](https://www.facebook.com/ClaudineChionhWebDev)
- [Google+](https://plus.google.com/116605328678906868849)
- [LinkedIn](http://au.linkedin.com/in/claudinec/)
',
      'format' => '3',
    ),
    'additional_classes' => '',
  );
  $export['also_on'] = $box;

  return $export;
}
