<?php

/**
 * @file
 * A collection of added select list options for Webform module.
 */

/**
 * Option list containing the Yes or No.
 */
function prim_options_yesno() {
  $yesno = array(
    'yes' => t('Ja'),
    'no' => t('Nej'),
  );

  return $yesno;
}

/**
 * Option list containing the man or woman.
 */
function prim_options_gender() {
  $gender = array(
    'man' => t('Man'),
    'woman' => t('Kvinna'),
  );

  return $gender;
}

/**
 * Option list containing dates.
 */
function prim_options_date() {
  $dates = array(
    'd1' => t('1:a'),
    'd2' => t('2:a'),
    'd3' => t('3:e'),
    'd4' => t('4:e'),
    'd5' => t('5:e'),
    'd6' => t('6:e'),
    'd7' => t('7:e'),
    'd8' => t('8:e'),
    'd9' => t('9:e'),
    'd10' => t('10:e'),
    'd11' => t('11:e'),
    'd12' => t('12:e'),
    'd13' => t('13:e'),
    'd14' => t('14:e'),
    'd15' => t('15:e'),
    'd16' => t('16:e'),
    'd17' => t('17:e'),
    'd18' => t('18:e'),
    'd19' => t('19:e'),
    'd20' => t('20:e'),
    'd21' => t('21:a'),
    'd22' => t('22:e'),
    'd23' => t('23:e'),
    'd24' => t('24:e'),
    'd25' => t('25:e'),
    'd26' => t('26:e'),
    'd27' => t('27:e'),
    'd28' => t('28:e'),
    'd29' => t('29:e'),
    'd30' => t('30:e'),
    'd31' => t('31:a'),
  );

  return $dates;
}

/**
 * Option list containing weeks.
 */
function prim_options_weeks() {
  $weeks = array(
    'w1' => t('1'),
    'w2' => t('2'),
    'w3' => t('3'),
    'w4' => t('4'),
    'w5' => t('5'),
    'w6' => t('6'),
    'w7' => t('7'),
    'w8' => t('8'),
    'w9' => t('9'),
    'w10' => t('10'),
    'w11' => t('11'),
    'w12' => t('12'),
    'w13' => t('13'),
    'w14' => t('14'),
    'w15' => t('15'),
    'w16' => t('16'),
    'w17' => t('17'),
    'w18' => t('18'),
    'w19' => t('19'),
    'w20' => t('20'),
    'w21' => t('21'),
    'w22' => t('22'),
    'w23' => t('23'),
    'w24' => t('24'),
    'w25' => t('25'),
    'w26' => t('26'),
    'w27' => t('27'),
    'w28' => t('28'),
    'w29' => t('29'),
    'w30' => t('30'),
    'w31' => t('31'),
    'w32' => t('32'),
    'w33' => t('33'),
    'w34' => t('34'),
    'w35' => t('35'),
    'w36' => t('36'),
    'w37' => t('37'),
    'w38' => t('38'),
    'w39' => t('39'),
    'w40' => t('40'),
    'w41' => t('41'),
    'w42' => t('42'),
    'w43' => t('43'),
    'w44' => t('44'),
    'w45' => t('45'),
    'w46' => t('46'),
    'w47' => t('47'),
    'w48' => t('48'),
    'w49' => t('49'),
    'w50' => t('50'),
    'w51' => t('51'),
    'w52' => t('52'),
    'w53' => t('53'),
  );

  return $weeks;
}

/**
 * Option list containing months.
 */
function prim_options_month() {
  $month = array(
    'jan' => t('jan'),
    'feb' => t('feb'),
    'mar' => t('mar'),
    'apr' => t('apr'),
    'may' => t('maj'),
    'jun' => t('jun'),
    'jul' => t('jul'),
    'aug' => t('aug'),
    'sep' => t('sep'),
    'oct' => t('okt'),
    'nov' => t('nov'),
    'dec' => t('dec'),
  );

  return $month;
}

/**
 * Option list containing programs.
 */
function prim_options_program() {
  $program = array(
    'bf' => t('BF'),
    'bp' => t('BP'),
    'ec' => t('EC'),
    'en' => t('EN'),
    'es' => t('ES'),
    'fp' => t('FP'),
    'hp' => t('HP'),
    'hr' => t('HR'),
    'hv' => t('HV'),
    'ib' => t('IB'),
    'ip' => t('IP'),
    'iv' => t('IV'),
    'kx' => t('KX'),
    'lp' => t('LP'),
    'mp' => t('MP'),
    'nv' => t('NV'),
    'np' => t('NP'),
    'op' => t('OP'),
    'ov' => t('OV'),
    'komvux' => t('Komvux'),
  );

  return $program;
}

/**
 * Option list containing four grades.
 */
function prim_options_four_grade() {
  $four_grade = array(
    'instammer_inte_alls' => t('Instämmer inte alls'),
    'instammer_inte' => t('Instämmer inte'),
    'instammer_delvis' => t('Instämmer delvis'),
    'instämmer_helt' => t('Instämmer helt'),
  );

  return $four_grade;
}

/**
 * Option list containing five requirement limits.
 */
function prim_options_requirement_limit() {
  $five_requirement_limit = array(
    'alldeles_for_lag' => t('Alldeles för låg'),
    'nagot_lag' => t('Något låg'),
    'lamplig' => t('Lämplig'),
    'nagot_hog' => t('Något hög'),
    'alldeles_for_hog' => t('Alldeles för hög'),
  );

  return $five_requirement_limit;
}

/**
 * Option list containing four evaluations.
 */
function prim_options_four_evaluations() {
  $four_evaluations = array(
    'inte_alls_bra' => t('Inte alls bra'),
    'mindre_bra' => t('Mindre bra'),
    'bra' => t('Bra'),
    'mycket_bra' => t('Mycket bra'),
  );

  return $four_evaluations;
}

/**
 * Option list containing four extensions.
 */
function prim_options_four_extensions() {
  $four_extensions = array(
    'inte_alls_mycket_litet' => t('Inte alls/Mycket litet'),
    'ganska_liten' => t('Ganska liten'),
    'ganska_stor' => t('Ganska stor'),
    'mycket_stor' => t('Mycket stor'),
  );

  return $four_extensions;
}

/**
 * Option list containing 0 or 1.
 */
function prim_options_zero_or_one() {
  $zero_or_one = array(
    'no' => t('0 '),
    'yes' => t('1 '),
  );

  return $zero_or_one;
}

/**
 * Option list containing 0 or 1.
 * The '' after readable option is intentional.
 * Because readable option can't be '0'.
 */
function prim_options_zero_one_no_answer() {
  $zero_one_no_answer = array(
    'no_numeric' => t('0 '),
    'yes_numeric' => t('1 '),
    'no_answer' => t('Ej svarat'),
  );

  return $zero_one_no_answer;
}