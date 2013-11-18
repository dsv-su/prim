<?php

/**
 * @file
 * Administration pages provided by Prim form module.
 */


/**
 * Menu callback for admin/config/prim_form.
 * @param $form
 *   The settings form.
 * @param $form_state
 *   The form state.
 * @return
 *   system_settings_form($form)
 */
function prim_form_admin_form($form, &$form_state) {

  $nodes = variable_get('webform_node_types'); // Get all node types that uses webform.

  $bool = FALSE;
  $node_type = array();
  // Adds all weborms to $nodes array
  foreach ($nodes as $key => $value) {
    $node_type[$value] = node_type_get_name($value);
    $bool = TRUE;
  }

  // If there are webforms created, user is allowesd to choose one.
  if ($bool) {
    $form['prim_form_teacher_type'] = array(
      '#type' => 'select', 
      '#title' => t('Välj lärarenkät'), 
      '#default_value' => variable_get('prim_form_teacher_type'),
      '#options' => $node_type,
      '#description' => t('Välj formulär att använda som lärarenkät.'),
      '#required' => TRUE,
    );
    $form['prim_form_student_type'] = array(
      '#type' => 'select', 
      '#title' => t('Välj elevenkät'), 
      '#default_value' => variable_get('prim_form_student_type'),
      '#options' => $node_type,
      '#description' => t('Välj formulär att använda för resultatrapportering.'),
      '#required' => TRUE,
    );

  }
  // Otherwise we warn the user
  elseif (!$bool) {
    drupal_set_message(t('Inga formulär är skapade'), $type = 'warning', $repeat = TRUE);
  }

  $node_reference_fields = array();
  $fields = field_info_fields();

  foreach ($fields as $field) {
    if ($field['type'] == 'node_reference') {
      $node_reference_fields[$field['field_name']] = $field['field_name'];
    }
  }

  $form['prim_form_reference'] = array(
    '#type' => 'select', 
    '#title' => t('Välj referensfält'), 
    '#default_value' => variable_get('prim_form_reference'),
    '#options' => $node_reference_fields,
    '#description' => t('Välj referensfält att använda som referens mellan resultatrapportering och lärarenkät.'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}