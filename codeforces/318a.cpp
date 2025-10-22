/**
 *    author: ndhoc
 *    created: 2025-10-22 21:47:23
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n,k; cin>>n>>k;
    ll i2=0;
    if(n%2!=0) i2=n/2+1;
    else i2=n/2;
    if(k==1){
        cout<<1;
        return 0;
    }
    if(k<=i2) cout<<(ll)(k*2-1);
    else cout<<(ll)((k-i2)*2);
    return 0;
}