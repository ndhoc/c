/**
 *    author: ndhoc
 *    created: 2025-10-26 08:25:13
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    double a,b,c; cin>>a>>b>>c;
    cout<<fixed<<setprecision(4)<<(21*a*a+5*b*b)/(2009*c*c+15)<<" "<<sqrt(a*a-2*b)/(3*c*c+4);
    return 0;
}