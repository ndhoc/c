/**
 *    newbie: ndhoc
 *    created: 2026-05-11 20:05:24
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int> a(n+1);

    for(int i=1; i<=n; ++i) cin >> a[i];
    vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

    for (int len = 1; len <= n; len++) {
        for (int l = 1; l + len - 1 <= n; l++) {
            int r = l + len - 1;
            dp[l][r] = 1 + dp[l + 1][r];
            for (int k = l + 1; k <= r; k++) {
                if (a[l] == a[k]) {
                    dp[l][r] = min(dp[l][r], dp[l + 1][k - 1] + dp[k + 1][r]);
                }
            }
        }
    }
    cout << dp[1][n];
    return 0;
}