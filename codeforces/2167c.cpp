/**
 *    author: ndhoc
 *    created: 2025-10-28 21:50:29
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        int even=0, odd=0;
        for(int i=0; i<n; ++i){
            cin>>a[i];
            if(a[i]%2==0) even++;
            else odd++;
        }
        if(even!=0 && odd!=0) sort(a.begin(),a.end());
        for(int i=0; i<n; ++i) cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
