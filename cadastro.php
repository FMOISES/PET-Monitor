<!DOCTYPE html>

<head>

</head>

<body>
    <?php

$nome = $_POST['nome']; 
$sobrenome = $_POST['sobrenome'];
$usuario = $_POST['usuario'];
$email = $_POST['email'];
$senha = $_POST['senha'];
$sexo = $_POST['sexo'];
$erro = 0;

if ($erro == 0){
    echo "todos dados foram digitados corretamente. <br>";
    include 'insere.inc';
}
?>
</body>

</html>