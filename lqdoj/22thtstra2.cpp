/**
 *    newbie: ndhoc
 *    created: 2026-06-20 09:37:22
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll a,b,c,d; cin >> a >> b >> c >> d;

    cout << min(a-c, min(a-d, min(b-c, b-d)));
    return 0;
}
