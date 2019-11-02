<?php

include 'conecta_mysql.inc';

$nome = $_POST['nome']; 
$sobrenome = $_POST['sobrenome'];
$usuario = $_POST['usuario'];
$email = $_POST['email'];
$senha = $_POST['senha'];
$sexo = $_POST['sexo'];

$sql = "INSERT INTO Tutor VALUES ('$nome','$sobrenome','$usuario','$email','$senha','$sexo','0')";

if ($conexao->query($sql)=== TRUE){
    echo "Usuário incluido com sucesso!";
} else {
    echo "Erro: " . $sql . "<br>" . $conexao->error;
}

$conexao->close();

?>