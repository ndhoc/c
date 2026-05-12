/**
 *    newbie: ndhoc
 *    created: 2026-05-11 21:33:59
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int> t(n), r(n-1), dp(n);
    for(int i=0; i<n; ++i) cin >> t[i];
    for(int i=0; i<n-1; ++i) cin >> r[i];
    
    dp[0] = t[0];

    for(int i=1; i<n; ++i){
        dp[i] = min(dp[i-1]+t[i], dp[i-1])
    }
    return 0;
}