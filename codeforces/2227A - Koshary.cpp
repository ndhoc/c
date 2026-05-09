/**
 *    newbie: ndhoc
 *    created: 2026-05-09 18:58:30
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        cout << ((x%2 && y%2) ? "NO\n" : "YES\n");
    }   
    return 0;
}