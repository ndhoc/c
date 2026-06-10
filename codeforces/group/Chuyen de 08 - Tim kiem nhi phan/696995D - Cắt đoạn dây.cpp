/**
 *    newbie: ndhoc
 *    created: 2026-06-10 14:35:51
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int check(const vector<int> &a, int n, ll k, int len) {
    int cnt = 0;

    for(int i=0; i<n; ++i) {
        cnt += a[i] / len;
    }
    return cnt >= k;
}

int bin_search(const vector<int> &a, int n, ll k) {
    int l = 1, r = a[n-1];
    int ans = 0;
    
    while(l <= r) {
        int m = l + (r - l) / 2;

        if(check(a, n, k, m)) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; ll k; cin >> n >> k;
    vector<int> a(n);

    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    cout << bin_search(a,n,k);
    return 0;
}