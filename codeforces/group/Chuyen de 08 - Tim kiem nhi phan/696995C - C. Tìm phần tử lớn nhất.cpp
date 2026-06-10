/**
 *    newbie: ndhoc
 *    created: 2026-06-10 13:51:04
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll bin_search(const vector<ll> &a, int n, ll x) {
    int l = 0, r = n-1;
    ll ans = -1;
    while(l <= r) {
        int m = l + (r - l) / 2;

        if(a[m] <= x) {
            ans = a[m];
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return ans;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<ll> a(n);
    
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    int t; cin >> t;
    while (t--) {
        ll x; cin >> x;
        cout << bin_search(a,n,x) << "\n";
    }
    return 0;
}