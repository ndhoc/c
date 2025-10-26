/**
 *    author: ndhoc
 *    created: 2025-10-26 08:16:18
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    double a,b; cin>>a>>b;
    cout<<21*a+5*b-2009<<" ";
    cout<<fixed<<setprecision(4)<<(double)((21*a*a-5*b)/(2009*b*b))<<"\n";
    cout<<fixed<<setprecision(6)<<(double)((21*a+5*b*b)/(2009*b+15));
    return 0;
}