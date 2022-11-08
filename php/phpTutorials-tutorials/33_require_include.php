<?php

// include '_dbconnect1.php';
require '_dbconnect.php';
// echo "this";



$sql = "SELECT * FROM `phptrip`";
$result = mysqli_query($conn, $sql);

//Find the number of records returned
$num =  mysqli_num_rows($result);
echo $num;
echo " records found in the database<br>";

while($row=mysqli_fetch_assoc($result)){
    // echo var_dump($row);
     echo $row['sno']. " Hello ". $row['name']." Welcome to  " .$row['dest'] . " ";
    echo "<br>";
}


?>