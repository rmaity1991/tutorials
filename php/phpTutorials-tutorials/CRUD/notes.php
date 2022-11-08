
<?php
//PHP script for fetching data
        $sql = "SELECT * FROM `notes`";
        $result = mysqli_query($conn, $sql);
        while ($row = mysqli_fetch_assoc($result)) {
            // echo var_dump($row);
            echo $row['sno'] . " Title " . $row['title'] . " Description is " . $row['description'] . " has been resolved";
            echo "<br>";
        }

        ?>