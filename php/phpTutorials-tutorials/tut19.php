<?php 
 echo "Welcome to multidimensional arrays in php<br>";

 //Creating a 2 dimensional array
 $multiArr = array(

    array(
        array(2,3,4),
        array(2,3,4),
        array(2,3,4),
        array(2,3,4)),
        array(
            array(2,3,4),
            array(2,3,4),
            array(2,3,4),
            array(2,3,4)),
            array(array(2,3,4),
                array(2,3,4),
                array(2,3,4),
                array(2,3,4)),
                array(
                    array(2,3,4),
                        array(2,3,4),
                        array(2,3,4),
                        array(2,3,4),
                                    ));
//  echo var_dump($multiArr);

// echo $multiArr[1][2];

//printing the content of a 2 dimensioanl array
// for ($i=0; $i < count($multiArr); $i++) {
//     echo var_dump($multiArr[$i]);
//      echo "<br>";
// }


for ($i=0; $i < count($multiArr); $i++) {
    for ($j=0; $j < count($multiArr[$i]); $j++) { 
        for ($k=0; $k < count($multiArr[$i][$j]); $k++) { 
            echo $multiArr[$i][$j][$k];
        }

        // echo $multiArr[$i][$j];
          echo " ";
    }
    // echo var_dump($multiArr[$i]);
     echo "<br>";
}


?>