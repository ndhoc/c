/**
 *    author: ndhoc
 *    created: 2026-07-18 14:59:59
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    int64_t s9 = 0;
    
    if(n < 9) return s9;

    int cur = 9;

    while(cur < n) {
        s9 += cur;
        cur += 9;
    }

    cout << s9;
    return 0;
}