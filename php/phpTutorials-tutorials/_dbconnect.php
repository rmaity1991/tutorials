<?php 

//Connecting to the database

$servername = "localhost";
$username = "root";
$password = "";
$database = "dbharry";


    //create a connection object
    $conn = mysqli_connect($servername,$username,$password,$database);
    //Die if connection was not successul
    if(!$conn){
        die("sorry we failed to connect: ". mysqli_connect_error());
    }
    else{

    echo "Connection was successful<br>";



    }


    ?>
