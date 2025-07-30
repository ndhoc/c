#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7; //chia dư cho 10^9 + 7

int fibo(int n) {
    vector<int> dp(n + 1); //Chạy từ 0 đến n, nên kích thước mảng là n + 1
    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= n; i++) { //Chạy từ 2 -> n vì 0 và 1 đã được quy ước trước đó
        dp[i] = (dp[i - 1] + dp[i - 2]) % mod; //Đề yêu cầu chia cho mod để không bị tràn số nguyên
    }
    return dp[n];
}

int main() {
    int n; cin >> n;
    cout << fibo(n);
    return 0;
}
