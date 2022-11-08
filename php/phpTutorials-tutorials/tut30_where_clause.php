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

    $sql = "SELECT * FROM `contactus` WHERE `concern`='hello'
    ";
    $result = mysqli_query($conn,$sql);

    //Usage of where clause to fetch data from the database
    $num =  mysqli_num_rows($result);
    echo $num;
    echo " records found in the database<br>";
    // Showing all records in the browser 
    $no =1;
    if($num>0){
        while($row=mysqli_fetch_assoc($result)){
             echo $no. " Hello ". $row['name']." your concern " .$row['concern'] . " has been resolved";
            echo "<br>";
            $no = $no +1;
        }
        
        
    }

    //Usage of WHERE Clause to update Data

    $sql = "UPDATE `contactus` SET `name` = 'AsimUpdat' WHERE `s.no` =5";
    $sql = "UPDATE `contactus` SET `email` = 'asim@mail12.com' WHERE `s.no` = 5";
    $sql = "UPDATE `contactus` SET `concern` = 'Having technical issues on package' WHERE `s.no` = 5";
    $result = mysqli_query($conn,$sql);
    echo var_dump($result);
     echo "<br>";
    $aff = mysqli_affected_rows($conn);

     echo "Number of affected row: $aff" ;
      echo "<br>";
    if($result){
         echo "We updated the record successfully";
    }
    else{
         echo "We could not update the record successfully";
    }




?>