/**
 *    newbie: ndhoc
 *    created: 2026-05-10 08:59:15
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int T; cin >> T;
    while (T--){
        string s; cin >> s;
        ll ans=0;
        for(int i=0; i<s.size(); ++i){
            ans += s[i] - '0';
        }
        cout << ans << "\n";
    }
    return 0;
}