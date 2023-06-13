<!DOCTYPE html>
<html lang="en">
<head>
   

    <title>login form</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div id="login_form">
        <form action="auth.php" method="post">
            <label > username</label>
            <input type="text" name="username" placeholder="username" required>
            <label >password</label>
            <input type="password" name="password" placeholder="password" required>
            <input type="submit" name="login" value="login">

        </form>
    </div>
    <?php
    echo $_GET["error"];
    ?>
</body>
</html>