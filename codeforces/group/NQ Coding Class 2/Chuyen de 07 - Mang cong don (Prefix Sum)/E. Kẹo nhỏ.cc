/**
 *    newbie: ndhoc
 *    created: 2026-06-25 17:28:39
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n; 
    
    vector<int64_t> a(n), ps(n+1, 0);

    for(int i=0; i<n; ++i) cin >> a[i];

    for(int i=0; i<n; ++i) {
        ps[i+1] = ps[i] + a[i]; 
    }

    int64_t k = 1e9;

    for(int i=1; i<=n; ++i) {
        k = min(abs(ps[i] - abs(ps[n] - ps[i])), k);
    }

    cout << k;
    return 0;
}