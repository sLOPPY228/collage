<!DOCKTYPE html>
<html>
    <head>
        <title>workshop website</title>
    </head>
    <body>
        <h3>registration page</h3>
        <form action="register_process.php" method="post">
            <div>
                <label>Username</label>
                <input type="text" name="username">
            </div>
            <div>
                <label>Password</label>
                <input type="password" name="password">
                <input type="checkbox" onclick="myFunction()">Show Password
            </div>
            <div>
                <label>name</label>
                <input type="text" name="name">
            </div>
            <div>
                <label>Age</label>
                <input type="number" name="age">
            </div>
            <div>
                <label>Phone_number</label>
                <input type="number" name="phone_number">
            </div>
            <div>
                <label>address</label>
                <input type="text" name="address">
            </div>
           <div>
            <input type="submit" value="register me">
           </div>
            
        </form>
    </body>