<?php
// mysql details
$host = "localhost";
$dbusername = "root";
$dbpassword = "";
$dbname = "workshop_db";
$con = mysqli_connect($host, $dbusername, $dbpassword, $dbname);
$select_sql_query = "select *from customer`";
$result = mysqli_query($con, $select_sql_query);
while ($row = mysqli_fetch_array($result)) {
    echo "Name" . $row['name'] . "address" . $row['address'];
    echo "<br>";
}
