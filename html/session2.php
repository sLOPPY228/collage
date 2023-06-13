<?php
session_start();
$name = $_SESSION['NAME'];
echo $name;
