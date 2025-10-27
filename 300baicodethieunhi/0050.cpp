/**
 *    author: ndhoc
 *    created: 2025-10-27 19:49:24
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    if(n<51) cout << n*600;
    else if(n<101) cout << 50*600+(n-50)*800;
    else if(n<201) cout << 50*600+50*800+(n-100)*1100;
    else cout << 50*600+50*800+100*1100+(n-200)*1500;   
    return 0;
}
