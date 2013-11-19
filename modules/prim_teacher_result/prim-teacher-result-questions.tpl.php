<?php 
if(count($variables['grades']['all']) > 0){
  print '<td class="prim_grade">';
  print '<table class="prim_question_matrix"><tr>';
  $count = 0;
  $row_break = 5;
  foreach($variables['grades']['all'] as $key=>$value){
    $count++;
    if(in_array($value,$variables['grades']['correct'])){
      $question_class = "prim_question_correct";

    } elseif(in_array($value,$variables['grades']['noanswer'])){
      $question_class = "prim_question prim_empty_grade";
    }
    else{
      $question_class = "prim_question";
    }
    print '<td class="'.$question_class.'">'.$value.'</td>';
    print (($count%$row_break) == 0 ? '</tr><tr>' : '');
    
  }//foreach

  if(($count%$row_break) != 0) {
    for ($i=0; $i < ($row_break - ($count%$row_break)); $i++) { 
      print '<td class="prim_question_empty">&nbsp;</td>';
    }
  }
  print '</tr></table>';
  print '</td>';
}//if statement

else {
  print '<td class="prim_empty_grade"></td>';
}
?>

