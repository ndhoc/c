/**
 *    newbie: ndhoc
 *    created: 2026-06-12 10:11:44
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int T; cin >> T;
    int cnt = 0;
    while(T--) {
        ll a, b, c; cin >> a >> b >> c;
        cnt += ((1LL*b*b - 4LL*a*c) >=0);
    }  
    
    cout << cnt;
    return 0;
}