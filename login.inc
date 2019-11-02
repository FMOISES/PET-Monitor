<?php
include 'conecta_mysql.inc';
$email = $_POST['login'];
$senha = ($_POST)['senha'];
md5($senha);
$sql = "SELECT senha from Tutor WHERE '$email'";
$exibe = ($sql);
if($exibe == $senha){
    echo"'INDEX.html'";
}else{
    echo "senha incorreta";
}
?>