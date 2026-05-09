/**
 *    newbie: ndhoc
 *    created: 2026-05-09 20:06:11
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int T; cin >> T;
    while(T--){
        ll P,C,r,n; cin>>P>>C>>r>>n;
  
        for(ll i=0; i<n; ++i){
            P = (__int128)P * (10000+r)/10000 + C;
        }    
        cout << P << "\n";
    }   
    return 0;
}