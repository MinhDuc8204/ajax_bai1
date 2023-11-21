<?php
$server='localhost';
$user="root";
$pass="";
$db="udn";
$con=mysqli_connect($user,$pass,$db);
mysqli_query($con,"set names 'utf8'");
?>