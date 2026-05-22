/**
 *    newbie: ndhoc
 *    created: 2026-05-22 09:13:37
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n,a,b; cin >> n >> a >> b;
        cout << min(1LL*n*a, min(1LL*b*(n/3)+(n%3)*a*1LL, 1LL*b*(n/3)+b)) << "\n";
    }
    return 0;
}