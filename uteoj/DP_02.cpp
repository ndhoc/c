#include <bits/stdc++.h>
using namespace std;

int dp[105][2], a[105], b[105];

int main(){
    int n, m; cin >> n >> m;

    for(int i = 0 ; i < n; ++i) cin >> a[i];
    for(int i = 0 ; i < n; ++i) cin >> b[i];

    dp[0][0] = a[0];
    dp[0][1] = b[0];

    for(int i = 1; i < n; ++i){
        dp[i][0] = min(dp[i-1][0], dp[i-1][1] + m) + a[i];
        dp[i][1] = min(dp[i-1][1], dp[i-1][0] + m) + b[i];
    }

    cout << min(dp[n-1][0], dp[n-1][1]);

    return 0;
}