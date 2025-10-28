/**
 *    author: ndhoc
 *    created: 2025-10-28 21:27:31
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    int m=INT_MAX,M=INT_MIN;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        m=min(m,x);
        M=max(M,x);
    }
    cout<<abs(m-M);
    return 0;
}
