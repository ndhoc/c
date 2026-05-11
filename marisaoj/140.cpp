/**
 *    newbie: ndhoc
 *    created: 2026-05-11 20:46:43
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<ll> dp(n+1);
    dp[0]=1; dp[1]=1; dp[2]=2;

    for(int i=3; i<=n; ++i){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
    }

    cout << dp[n];

    return 0;
}