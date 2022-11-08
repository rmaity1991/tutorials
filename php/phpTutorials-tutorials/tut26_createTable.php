<?php 
//  Connecting to a mysql database
//  1. MYSQLi extension
//  2. PDO
//Connecting to the Database
$servername = "localhost";
$username = "root";
$password = "";
$database = "hassansial";


//create a connection object
$conn = mysqli_connect($servername,$username,$password,$database);
//Die if connection was not successul
if(!$conn){
    die("sorry we failed to connect: ". mysqli_connect_error());
}
echo "Connection was successful";
//Create a table in the db
$sql = " CREATE TABLE `enrolments` ( `sno` INT NOT NULL AUTO_INCREMENT , `Name` VARCHAR(11) NOT NULL , `Section` VARCHAR(10) NOT NULL , `Department` VARCHAR(20) NOT NULL , `Majors` VARCHAR(20) NOT NULL , PRIMARY KEY (`sno`))";
$result = mysqli_query($conn,$sql);
//check for table creation
if($result){
    echo "The db was created successfully ! <br>";
}
else{
    echo "The db was not created successfully because of this -->" . mysqli_error($conn);
}

?>