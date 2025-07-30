/*
  - Tạo chuối đối xứng
  - Tìm chuỗi con chung dài nhất của hai chuỗi
  - Kết quả là số phần tử của chuỗi ban đâu trừ đi độ dài của chuỗi con chung dài nhất
*/

#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int main(){
    int n; cin >> n;
    string s; cin >> s;

    string rs = s;
    reverse(rs.begin(), rs.end());
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(s[i-1] == rs[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << n - dp[n][n];

    return 0;
}
