/**
 *    author: ndhoc
 *    created: 2026-07-24 20:27:14
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t; 
    
    while(t--) {
        int n; cin >> n;

        int s = 0;
        while(n--) {
            int x; cin >> x;
            s += x;
        }

        cout << ((s%4==0) ? "YES\n":"NO\n");
    }
    return 0;
}