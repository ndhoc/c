/**
 *    author: ndhoc
 *    created: 2025-11-13 13:01:18
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m; cin>>n>>m;
    vector<int> a(m);
    for(int i=0; i<m; ++i){
        cin>>a[i];
    }   
    sort(a.begin(),a.end());
    int ans = INT_MAX;
    for(int i=0; i<=m-n; ++i){
        ans=min(ans,a[i+n-1]-a[i]);
    }
    if(ans==INT_MAX) cout<<0;
    else cout<<ans;
    return 0;
}
