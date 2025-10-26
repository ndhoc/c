/**
 *    author: ndhoc
 *    created: 2025-10-26 09:22:20
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    int cnt=0,ans=0;
    for(int i=1; i<n; ++i){
        if(a[i-1]<=a[i]){
            cnt++;
            ans=max(cnt,ans);
        }
        else cnt=0;
    }
    cout<<ans+1;
    return 0;
}