#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<long long> a(n), dp(n, 0);

    for(int i = 0; i < n; ++i) cin >> a[i];
    dp[0] = a[0];
    for(int i = 1; i < n; ++i){
        dp[i] = max(dp[i-1] + a[i], a[i]);
    }
    cout << *max_element(dp.begin(), dp.end());
    return 0;
}
