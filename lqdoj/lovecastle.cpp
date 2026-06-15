/**
 *    newbie: ndhoc
 *    created: 2026-06-15 16:12:01
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int q; cin >> q;
    while(q--) {
        int a,b,c; cin >> a >> b >> c;
        cout << max(0, max(b,c)+1-a) << " " << max(0, max(a,c)+1-b) << " " << max(0, max(a,b)+1-c) << "\n";
    }   
    return 0;
}