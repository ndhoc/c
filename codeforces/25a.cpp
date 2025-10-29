/**
 *    author: ndhoc
 *    created: 2025-10-29 10:15:32
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    vector<int> a(n);
    int odd=0, even=0;
    for(int i=0; i<n; ++i){
        cin>>a[i];
        if(a[i]&1) odd++;
        else even++;
    }   
    if(odd==1){
        for(int i=0; i<n; ++i){
            if(a[i]&1){ cout<<i+1; break;}
        }
    }
    else{
        for(int i=0; i<n; ++i){
            if(!(a[i]&1)){cout<<i+1; break;}
        }
    }
    return 0;
}
