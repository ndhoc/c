/**
 *    author: ndhoc
 *    created: 2025-10-14 12:18:53
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll a,b,c,d; cin>>a>>b>>c>>d;
    if(a <= d && c <= b) cout<< "YES";
    else cout<<"NO";
    return 0;
}
