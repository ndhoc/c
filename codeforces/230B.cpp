/**
 *    author: ndhoc
 *    created: 2025-11-13 12:26:00
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool snt(int n){
    for(int i=2; i<=sqrt(n); ++i){
        if(n%i==0) return false;
    }
    return n>1;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    set<ll> se;
    se.insert(4);
    for(int i=3; i<=1e6; i+=2){
        if(snt(i)) se.insert(1LL*i*i);
    }
    while(n--){
        ll x; cin>>x;
        cout<<(se.find(x)!=se.end() ? "YES\n":"NO\n");
    }
    return 0;
}
