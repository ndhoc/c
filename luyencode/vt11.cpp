/**
 *    author: ndhoc
 *    created: 2025-10-28 21:23:34
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin>>a[i];
    sort(a.begin()+1, a.end()-1);
    for(int i=0; i<n; ++i) cout<<a[i]<<" ";
    return 0;
}
