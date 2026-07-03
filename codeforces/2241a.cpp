/**
 *    newbie: ndhoc
 *    created: 2026-07-03 20:08:09
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    
    while(t--) {
        int x, y; cin >> x >> y;

        cout << (x%y==0 ? "YES\n":"NO\n");
    }
    return 0;
}