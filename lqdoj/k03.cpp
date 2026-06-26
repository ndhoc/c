/**
 *    newbie: ndhoc
 *    created: 2026-06-26 16:42:06
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    
    while(t--) {
        int64_t n; cin >> n;
        int64_t ans = (n*(n-1)) / 2;
        cout << ans << "\n";
    }
    return 0;
}