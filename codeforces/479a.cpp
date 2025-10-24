/**
 *    author: ndhoc
 *    created: 2025-10-24 11:57:53
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a,b,c; cin>>a>>b>>c;
    int x=a+b*c,y=a*(b+c),z=a*b*c,t=(a+b)*c,m=a+b+c;
    cout<<max(x,max(y,max(z,max(t,m))));
    return 0;
}