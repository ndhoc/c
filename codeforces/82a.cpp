/**
 *    author: ndhoc
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    vector<string> a={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    while(n>5){
        n=n/2-2;
    }
    cout<<a[n-1];
    return 0;
}
