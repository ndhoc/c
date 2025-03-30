<?php
header("Content-Type: text/plain");

// Flag thật
$flag = "FLAG{520_1s_w0_4i_n1}";

// Mã hóa Base64 nhiều lần
for ($i = 0; $i < 5; $i++) {
    $flag = base64_encode($flag);
}

echo $flag;
?>
