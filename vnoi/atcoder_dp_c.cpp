#include <bits/stdc++.h>

int n; 
const int m = 1e5+5;
int a[m][3];
long long dp[m][3];
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j) cin >> a[i][j];
    }

    dp[0][0] = a[0][0];
    dp[0][1] = a[0][1];
    dp[0][2] = a[0][2];

    for(int i = 1; i < n; ++i) {
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a[i][0];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + a[i][1];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + a[i][2];
    }

    cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]}) << endl;
    
    return 0;
}
