<?php 

 echo "This is tut 15 of functions in php<br>";
function processMarks($arrMarks){
    $sum =0;
    foreach ($arrMarks as  $value) {
        $sum +=$value;
        
    }
    return $sum;
}
function avgMarks($avgMarks){
    $avg = 0;
    $i = 1;
    foreach ($avgMarks as $val) {
        $avg +=$val;
        $i++;
    }
    return $avg/$i;
}
$rohan = [33,34,56,78,49,100];
$sumMarks = processMarks($rohan);
$rohanAvgMarks = avgMarks($rohan);
$hassan = [33,44,55,6,7,8,89];
$sumMarksHassan = processMarks(($hassan));
 echo "Total marks scored by rohan out of 600 are $sumMarks<br>";
 echo "Total marks scored averaged by rohan out of 600 are $rohanAvgMarks<br>";
 echo "Total marks scored by rohan out of 600 are $sumMarksHassan";

?>