/**
 *    newbie: ndhoc
 *    created: 2026-06-20 10:38:21
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s; cin >> s;
    
    ll isbn = 0;
    for(ll i=0; i<s.size(); ++i) {
        isbn += (10-i) * (s[i] - '0');
    }
    
    ll ans = (11 - (isbn%11)) % 11;

    if(ans == 10) cout << "X";
    else cout << ans;
    return 0;
}