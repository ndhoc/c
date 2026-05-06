/**
 *    newbie: ndhoc
 *    created: 2026-05-06 19:35:48
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    ll cost = 0;
    for(int i=1; i<n; ++i) {
        if (a[i-1] > a[i]) {
            cost += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }
    cout << cost;
    return 0;
}