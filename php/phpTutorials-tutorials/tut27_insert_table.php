<?php 
//  Connecting to a mysql database
//  1. MYSQLi extension
//  2. PDO
//Connecting to the Database
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
echo "Connection was successful";
//Create a table in the db
$sql = "INSERT INTO `contactus` (`name`, `email`,`concern`) VALUES ('hamza', 'hamza@mail.com','Having fee issue')
";
$result = mysqli_query($conn,$sql);
//check for table creation
if($result){
    echo "The db table data  inserted successfully ! <br>";
}
else{
    echo "The db was not created successfully because of this -->" . mysqli_error($conn);
}

?>