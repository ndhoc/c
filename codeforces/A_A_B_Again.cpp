/**
 *    hoc0g
 *    created: 2026-03-11 19:13:41
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << n%10 + n/10 << endl;
    }
    return 0;
}