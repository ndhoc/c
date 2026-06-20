/**
 *    newbie: ndhoc
 *    created: 2026-06-20 19:53:21
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
    
        vector<int> a(n);

        for(int i=0; i<n; ++i) cin >> a[i];

        int ans = a[0];
        for(int i=1; i<n; ++i) {
            if(a[i-1] < a[i]) a[i] = a[i-1];
            ans += a[i];
        }

        cout << ans << "\n";
    }

    return 0;
}