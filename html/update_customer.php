<?php
$id =$_POST['id'];
$address = $_POST['address'];
//mysql details
$host = "localhost"; // Host name
$username = "root"; // Mysql username
$password = ""; // Mysql password
$dbname = "workshop_db"; // Database name
// Connect to server and select databse.
$con = mysqli_connect($host, $username, $password,$dbname); 
$select_sql_query = "update customer set address ='$address' where id= $id";
$result = mysqli_query($con,$select_sql_query);