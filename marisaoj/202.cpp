/**
 *    newbie: ndhoc
 *    created: 2026-06-22 21:33:01
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 100005;

ll a[MAXN], ST[4*MAXN];

void build(int id, int l, int r) {
    if(l == r) {
        ST[id] = a[l];
        return;
    }

    int m = (l+r)/2;

    build(2*id, l, m);
    build(2*id+1, m+1, r);

    ST[id] = min(ST[2*id], ST[2*id+1]);
}

void update(int id, int l, int r, int i, int x) {
    if(l == r) {
        ST[id] += x;
        return;
    }

    int m = (l+r)/2;

    if(i <= m) {
        update(2*id, l, m, i, x);
    }

    else {
        update(2*id+1, m+1, r, i, x);
    }

    ST[id] = min(ST[2*id], ST[2*id+1]);
}

ll query(int id, int l, int r, int u, int v) {
    if(v < l || r < u) return INT_MAX;

    if(u <= l && r <= v) return ST[id];

    int m = (l+r)/2;

    ll min_l = query(2*id, l, m, u, v);
    ll min_r = query(2*id+1, m+1, r, u, v);

    return min(min_l, min_r);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n, q; cin >> n >> q;

    for(int i=0; i<n; ++i) cin >> a[i];

    build(1, 0, n-1);

    while(q--) {
        int k, l, r; cin >> k >> l >> r;
        if (k == 1) {
            update(1, 0, n-1, l-1, r);
        }
        
        else {
            --l; -- r;
            cout << query(1, 0, n-1, l, r) << "\n";
        }
    }
    return 0;
}