/**
 *    newbie: ndhoc
 *    created: 2026-06-20 10:21:10
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<ll> a(n);
    ll g = 0, s = 0, ans=0;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        s += a[i];
        g = i+1;
        if(s >= g*g) ans=g;
    }

    cout << ans;
    return 0;
}