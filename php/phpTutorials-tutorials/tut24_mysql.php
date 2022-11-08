<?php 
 echo "Welcome to the stage where we are ready to get connected to a database";
//  Connecting to a mysql database
//  1. MYSQLi extension
//  2. PDO
//Connecting to the Database
$servername = "localhost";
$username = "root";
$password = "";


//create a connection object
$conn = mysqli_connect($servername,$username,$password);
//Die if connection was not successul
if(!$conn){
    die("sorry we failed to connect: ". mysqli_connect_error());
}
echo "Connection was successful";

?>