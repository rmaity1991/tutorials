<?php 
//  echo "This is tutorial 18 of php <br>";
//  $arr = array ('this','that','what');
//  echo $arr[0];

//Associative Arrays 


    $favCol = array(
        'Hassan' => 'blue', 
        'Iqbal' => 'Red', 
        'Sial' => 'Purple', 
        'Haris' => 'blue', 
        'Hamna' => 'blue', 
        9 => 'blue', 
    );

    foreach ($favCol as $key => $value) {
         echo "$key has $value <br>";
    }
    //  echo $favCol['Hassan'];
    //   echo "<br>";
    //   echo $favCol['Iqbal'];
    //   echo "<br>";
    //   echo $favCol['Sial'];
    //   echo "<br>";
    //   echo $favCol['Haris'];
    //   echo "<br>";
    //   echo $favCol['Hamna'];
    //   echo "<br>";
    //   echo $favCol[9];
    //   echo "<br>";

?>