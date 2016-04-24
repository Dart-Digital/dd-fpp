<?php
/**
 * @file
 * dd_fields.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function dd_fields_image_default_styles() {
  $styles = array();

  // Exported image style: dd_large.
  $styles['dd_large'] = array(
    'label' => 'DD Large',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: dd_medium.
  $styles['dd_medium'] = array(
    'label' => 'DD Medium',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1024,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: dd_small.
  $styles['dd_small'] = array(
    'label' => 'DD Small',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function dd_fields_paragraphs_info() {
  $items = array(
    'dd_image' => array(
      'name' => 'Image',
      'bundle' => 'dd_image',
      'locked' => '1',
    ),
  );
  return $items;
}
