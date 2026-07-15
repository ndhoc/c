/**
 *    newbie: ndhoc
 *    created: 2026-07-03 20:14:20
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    
    while(t--) {
        int x; cin >> x;

        int tmp = x;
        set<int> se;
        while(tmp!=0) {
            se.insert(tmp%10);
            tmp /= 10;
        }

        if(se.size() < 3) cout << x << "\n";

    }
    return 0;
}