/**

 *    newbie: ndhoc
 *    created: 2026-04-28 21:51:09
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    ll sum = 0;
    vector<int> a(n);
    for(int i=0; i<n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    ll total = 1LL * n * (n+1) / 2;
    cout << total - sum;
    return 0;
}
