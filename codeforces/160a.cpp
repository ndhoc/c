/**
 *    author: ndhoc
 *    created: 2025-10-22 21:33:34
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    vector<int> a(n);
    int hs=0;
    for(int i=0; i<n; ++i){
        cin>>a[i];
        hs+=a[i];
    }
    hs/=2; 
    sort(a.rbegin(),a.rend());
    int ans=0, curs=0;
    for(int i=0; i<n; ++i){
        curs+=a[i];
        if(curs>hs){
            cout<<ans+1;
            break;
        }
        else ans++;
    }
    return 0;
}