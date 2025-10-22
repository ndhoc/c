/**
 *    author: ndhoc
 *    created: 2025-10-22 21:16:02
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n; 
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%477==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}