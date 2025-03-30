// 🛑 Flag giả trong JavaScript
console.log("FLAG{gi4u_th3_cung_t1m_dc}");

// 🕵️‍♂️ Fetch flag thật từ PHP, nhưng bị mã hóa nhiều lần!
setTimeout(() => {
    fetch("clgt.php")
        .then(response => response.text())
        .then(data => {
            console.log("Có vẻ bạn đã tìm đúng chỗ...");
            console.log("Flag : " + data);
        })
        .catch(error => console.error("Lỗi:", error));
}, 5000);