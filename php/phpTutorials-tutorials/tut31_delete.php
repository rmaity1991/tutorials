<?php 
//Connecting to the database

$servername = "localhost";
$username = "root";
$password = "";
$database = "contact";


    //create a connection object
    $conn = mysqli_connect($servername,$username,$password,$database);
    //Die if connection was not successul
    if(!$conn){
        die("sorry we failed to connect: ". mysqli_connect_error());
    }
    else{

    echo "Connection was successful<br>";



    }


    //Sql query for Deleting
    $sql = "DELETE FROM `contactus` WHERE `concern` = 'hello' LIMIT 3";
    $result = mysqli_query($conn,$sql);
    $aff = mysqli_affected_rows($conn);

     echo "Number of affected row: $aff" ;
      echo "<br>";
    
    
    if($result){
        echo "The record deleted successfully";
   }
    else{
        echo "The record was not deleted successfully";
   }
    


?>