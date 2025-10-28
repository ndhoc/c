/**
 *    author: ndhoc
 *    created: 2025-10-28 22:20:01
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<ll> se;
        for(int i=0; i<n; ++i){
            ll x; cin>>x; se.insert(x);
        }
        vector<ll> a;
        for(auto it:se)a.push_back(it);
        vector<int> snt={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
        ll g=0;
        n=a.size();
        int ans=0;
        for(int i=0; i<n; ++i) g=__gcd(g,a[i]);
        for(int i=0; i<snt.size(); ++i){
            if(g%snt[i]!=0){
                ans=snt[i];
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
