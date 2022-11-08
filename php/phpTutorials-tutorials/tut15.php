<?php 
 echo "Welcome to the world of foreach loops <br>";
 $arr = array("bananas","apples","mangoes","bread","milk","butter");
//  for ($i=0; $i <count($arr) ; $i++) { 
//       echo "$arr[$i]";
//        echo "<br>";
//  }
foreach ($arr as $value) {
     echo "$value <br>";
}

?>