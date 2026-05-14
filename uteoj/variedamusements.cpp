/**
 *    newbie: ndhoc
 *    created: 2026-05-13 21:56:58
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,a,b,c; cin>>n>>a>>b>>c;
    vector<vector<ll>> dp(n, vector<ll>(3));

    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;

    for(int i=1; i<n; ++i){
        dp[i][0] = 1LL * a * (dp[i-1][1] + dp[i-1][2]) % MOD;
        dp[i][1] = 1LL * b * (dp[i-1][0] + dp[i-1][2]) % MOD;
        dp[i][2] = 1LL * c * (dp[i-1][0] + dp[i-1][1]) % MOD;
    }

    cout << 1LL * (dp[n-1][0] + dp[n-1][1] + dp[n-1][2]) % MOD;
    return 0;
}