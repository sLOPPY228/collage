<?php
$username = $_POST['username'];
$password = $_POST['password'];


// mysql details
$host = "localhost";
$dbusername = "root";
$dbpassword = "";
$dbname = "workshop_db";



$con = mysqli_connect($host, $dbusername, $dbpassword, $dbname);
$sql = "Select * from customer where username = '$username' and password ='$password'";
$res = mysqli_query($con,$sql);
if(mysqli_num_rows($res)>0){
    header('Location:welcome.php');
}else{
    header('Location:login.php');
}
