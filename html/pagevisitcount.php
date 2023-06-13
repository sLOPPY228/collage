<?php
// program to count number of page visit
session_start();
if(empty($_SESSION['page_visit'])){
    $_SESSION['page_visit'] = 1;
}
else{
    $_SESSION['page_visit'] = $_SESSION['page_visit'] + 1;
    }
    echo "you cisited this page".$_SESSION['page_visit']."times";
