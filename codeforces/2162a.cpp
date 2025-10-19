/**
 *    author: ndhoc
 *    created: 2025-10-19 20:16:53
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n, ans=0; cin>>n;
        while(n--){
            int x; cin>>x;
            ans=max(ans,x);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
