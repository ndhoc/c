/**
 *    newbie: ndhoc
 *    created: 2026-05-09 19:35:41
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db double

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int T; cin >> T;
    while(T--){
        ll E,k,S,C; cin>>E>>k>>S>>C;
        ll Ek = E*k;
        if(S >= Ek) cout << 0 << "\n";
        else if(C == 0) cout << -1 << "\n";
        else cout << (Ek-S + C-1)/C << "\n";
    }   
    return 0;
}