<?php 
 echo "Connection was successful";



    


//submit these to a database

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
    $sql = "SELECT * FROM `contactus`";
    $result = mysqli_query($conn,$sql);

    //Find the number of records returned
    $num =  mysqli_num_rows($result);
    echo $num;
    echo " records found in the database<br>";

    //Display the rows returned by the sql query
    if($num>0){
        // $row = mysqli_fetch_assoc($result);
        // echo var_dump($row);
        // echo "<br>";
        //We can fetch in a better way using the while loop
        while($row=mysqli_fetch_assoc($result)){
            // echo var_dump($row);
             echo $row['s.no']. " Hello ". $row['name']." your concern " .$row['concern'] . " has been resolved";
            echo "<br>";
        }
        
        
    }



?>