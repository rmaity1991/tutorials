<?php 
 echo "Welcome to sceope and lcoal global vars in php<br>";
 $a =98;
 $b = 89;
 function printValue(){
     global $a,$b; //Give me acces to global variable
     $a =1000;
    $b = 89;
      echo "<br>The value of your value is $a,$b";
    }
    //  echo $a;
    
    printValue();
    echo "<br>The value of your value is $a,$b";
     echo "<br>";
    //  echo var_dump($GLOBALS); //Prints all the variables
     echo var_dump($GLOBALS["a"]);
     echo var_dump($GLOBALS["b"]);

  