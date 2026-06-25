/**
 *    newbie: ndhoc
 *    created: 2026-06-25 16:51:50
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int64_t> a(n);

    for(int i=0; i<n; ++i) cin >> a[i];

    vector<int64_t> presum(n+1, 0);

    for(int i=0; i<n; ++i) {
        presum[i+1] = presum[i] + a[i];
    }

    int t; cin >> t;

    while(t--) {
        int l, r; cin >> l >> r;
        
        cout << presum[r] - presum[l-1] << "\n";
    }
    return 0;
}