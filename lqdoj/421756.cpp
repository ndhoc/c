/**
 *    newbie: ndhoc
 *    created: 2026-06-29 22:05:44
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    int m = INT_MAX, M = INT_MIN, s = 0;
    
    for(int i=0; i<n; ++i) {
        int x; cin >> x;
        m = min(m, x);
        M = max(M, x);
        s += x;
    }

    cout << s << " " << M << " " << m;
    return 0;
}