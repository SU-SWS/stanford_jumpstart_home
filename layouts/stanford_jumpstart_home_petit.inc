<?php
/**
 * @file
 * Code for the Stanford Jumpstart Hoover Homepage layout.
 *  @author Caryl Westerberg <cjwest@stanford.edu>
 */

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'stanford_jumpstart_home_petit';
$context->description = 'Homepage: Petit layout with full-width banner, news, events, and a large custom block';
$context->tag = 'Home Page';
$context->conditions = array(
  'path' => array(
    'values' => array(
      '<front>' => '<front>',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'bean-homepage-banner-image' => array(
        'module' => 'bean',
        'delta' => 'homepage-banner-image',
        'region' => 'main_top',
        'weight' => '-9',
      ),
      'bean-homepage-about-block' => array(
        'module' => 'bean',
        'delta' => 'homepage-about-block',
        'region' => 'content_lower',
        'weight' => '-10',
      ),
      'views-f73ff55b085ea49217d347de6630cd5a' => array(
        'module' => 'views',
        'delta' => 'f73ff55b085ea49217d347de6630cd5a',
        'region' => 'content_lower',
        'weight' => '-9',
      ),
      'bean-jumpstart-large-custom-block' => array(
        'module' => 'bean',
        'delta' => 'jumpstart-large-custom-block',
        'region' => 'content_bottom',
        'weight' => '-10',
      ),
      'views-stanford_events_views-block' => array(
        'module' => 'views',
        'delta' => 'stanford_events_views-block',
        'region' => 'content_bottom',
        'weight' => '-9',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Home Page');
t('Homepage: Petit layout with full-width banner, news, events, and a large custom block');
