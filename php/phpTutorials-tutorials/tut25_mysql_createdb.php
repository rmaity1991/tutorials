<?php 
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
//create a db
$sql = "create DATABASE hello2";
$result = mysqli_query($conn,$sql);
//Check for the database creation
if($result){
     echo "The db was created successfully<br>";
}
else{
     echo "The db was not created successfully because of this error -->". mysqli_error($conn);
}
echo "The result is";
echo  var_dump($result);


?>