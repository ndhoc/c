/**
 *    author: ndhoc
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int s,n; cin>>s>>n;
    vector<pair<int,int>> a(n);
    for(int i=0; i<n; ++i){
        cin>>a[i].first>>a[i].second;
    }
    bool ok=true;
    sort(a.begin(),a.end());
    for(int i=0; i<n; ++i){
        if(s<=a[i].first) ok=false;
        else{
            s+=a[i].second;
        }
    }
    if(ok) cout<<"YES";
    else cout<<"NO";
    return 0;
}
