/**
 *    newbie: ndhoc
 *    created: 2026-06-25 18:09:27
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    
    int64_t cur = 0, ans = LLONG_MIN;

    while(n--) {
        int64_t x; cin >> x;
        cur = max(x, cur + x);
        ans = max(ans, cur);
    }

    cout << ans;
    return 0;
}