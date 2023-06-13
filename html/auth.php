<?php
$user = $_POST["username"];
$pass = $_POST["password"];
if($user == "ashok" && $pass == "123"){
    echo "Welcome " .$user;
}
else{
    header("Location:form.php?error=invalid credentials");
   
    }
    ?>