/**
 *    newbie: ndhoc
 *    created: 2026-07-03 19:54:05
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;

    string ans = "";
    for(int i=0; i<n; ++i) {
        int n; cin >> n;
        if(n == 27) ans += " ";
        else ans += static_cast<char>(96 + n);
    } 

    cout << ans;
    return 0;
}