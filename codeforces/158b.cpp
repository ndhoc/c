/**
 *    author: ndhoc
 *    created: 2025-11-13 12:38:09
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n; 
    int x1=0,x2=0,x3=0,ans=0;
    for (int i=0; i<n; ++i){
        int x; cin>>x;
        if(x==1) ++x1;
        else if (x==2) ++x2;
        else if (x==3) ++x3;
        else ans++;
    }
    while(x3>0 && x1>0){
        --x3;
        --x1;
        ++ans;
    }
    while(x1>1){
        x1-=2;
        ++x2;
    }
    while(x2>1){
        x2-=2;
        ++ans;
    }
    if(x1==1 && x2==1) cout<<ans+x3+1;
    else cout<<ans+x1+x2+x3;
    return 0;
}
