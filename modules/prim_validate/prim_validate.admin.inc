<?php

/**
 * @file
 * Prim validate administration functions.
 */

/**
 * Form constructor for Prim validate settings.
 * @param $form
 *   The settings form.
 * @param $form_state
 *   The form state.
 * @return
 *   system_settings_form($form)
 */
function prim_validate_admin_form($form, &$form_state) {

  $form['prim_school_code'] = array(
    '#type' => 'password',
    '#title' => t('Provkod'),
    '#description' => t('Användare som registrerar sig måste ange denna provkod.'),
    '#size' => 30,
    '#maxlength' => 128,
    '#required' => TRUE,
  );

  $form['prim_school_code_verify'] = array(
    '#type' => 'password',
    '#title' => t('Verifiera'),
    '#description' => t('Verifiera koden.'),
    '#size' => 30,
    '#maxlength' => 128,
    '#required' => TRUE,
  );

  // Validate password
  $form['#validate'][] = 'prim_validate_admin_validate';

  // Submit
  $form['#submit'][] = 'prim_validate_admin_submit';

  return system_settings_form($form);
}

/**
 * Prim validate settings validate function
 */
function prim_validate_admin_validate($form, &$form_state) {
  if ($form_state['values']['prim_school_code'] != $form_state['values']['prim_school_code_verify']) {
    form_set_error('school_code', t('De angivna provkoderna överenstämmer inte.'), $limit_validation_errors = NULL);
  }
}

/**
 * Prim validate settings submit function
 */
function prim_validate_admin_submit($form, &$form_state) {
  $salt = "(asd90.#02sA";

  $form_state['values']['prim_school_code'] = md5($salt . $form_state['values']['prim_school_code']);
  unset($form_state['values']['prim_school_code_verify']);
}