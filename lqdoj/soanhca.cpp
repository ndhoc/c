/**
 *    newbie: ndhoc
 *    created: 2026-05-06 19:51:46
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        sort(s.rbegin(), s.rend());
        cout << s << "\n";
    }
    return 0;
}