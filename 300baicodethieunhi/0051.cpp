/**
 *    author: ndhoc
 *    created: 2025-10-27 19:53:57
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    if(n%2==0){
        cout<<"Chan\n";
        if(n==0){ cout << "Khong"; return 0;}
    }
    else cout << "Le\n";
    if(n<0) cout<<"Am";
    else if(n>0) cout<<"Duong"; 
    return 0;
}
