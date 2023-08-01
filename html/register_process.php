<?php
$username = $_POST['username'];
$password1 = $_POST['password'];
$name = $_POST['name'];
$age = $_POST['age'];
$phone_number = $_POST['phone_number'];
$address = $_POST['address'];


// mysql details
$host = "localhost";
$dbusername = "root";
$dbpassword = "";
$dbname = "workshop_db";


$con = mysqli_connect($host, $dbusername, $dbpassword, $dbname);
$sql = "INSERT INTO customer(username,password,name,age,phone_number,address) values('$username','$password1','$name','$age','$phone_number','$address')";
mysqli_query($con, $sql);
header("location:login.php");
?>


