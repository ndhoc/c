/**
 *    newbie: ndhoc
 *    created: 2026-06-20 10:53:06
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s; cin >> s;
    
    map<char,int> mp;

    for(char c:s) {
        mp[c]++;
    }

    string ans = "";

    for(int i=0; i<s.size(); ++i) {
        if(mp[s[i]] == 1) {
            ans = s[i];
            break;
        }
    }

    cout << ans;
    return 0;
}