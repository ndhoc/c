/**
 *    newbie: ndhoc
 *    created: 2026-06-10 12:45:24
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll bin_search(ll n, ll x) {
    ll l=1, r=n, ans = n;
    while(l <= r) {
        ll m = l + (r-l) / 2;

        if(m*m+1 >= x) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n; cin >> n;

    int t; cin >> t;
    while(t--) {
        ll x; cin >> x;
        ll k = bin_search(n,x);
        cout << k*k+1 << "\n";
    }
    return 0;
}