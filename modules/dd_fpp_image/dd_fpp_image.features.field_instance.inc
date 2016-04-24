<?php
/**
 * @file
 * dd_fpp_image.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dd_fpp_image_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'fieldable_panels_pane-dd_image-field_dd_image_paragraph'.
  $field_instances['fieldable_panels_pane-dd_image-field_dd_image_paragraph'] = array(
    'bundle' => 'dd_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_dd_image_paragraph',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'dd_image' => 'dd_image',
      ),
      'bundle_weights' => array(
        'dd_image' => 2,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');

  return $field_instances;
}
