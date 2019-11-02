<!doctype html>
<html lang="pt-br">
<head>
</head>
<body>
    <?php


    $email = $_POST['login'];
    $senha = $_POST['senha'];
    $erro= 0;
    if ($erro == 0){
        echo "todos dados foram digitados corretamente. <br>";
        include 'login.inc';
    }
    ?>
</body>
</html>