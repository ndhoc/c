/**
 *    newbie: ndhoc
 *    created: 2026-06-22 19:49:32
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 200005;

ll x[MAXN], ST[4*MAXN];

void build(int id, int l, int r) {
    if(l == r) {
        ST[id] = x[l];
        return;
    } 

    int m = (l + r) / 2;
    
    build(2*id, l, m);
    build(2*id+1, m+1, r);

    ST[id] = ST[2*id] + ST[2*id+1];
}

// void update(int id, int l, int r, int pos, int val) {
//     if(l == r) {
//         ST[id] = x[val];
//         return;
//     }

//     int m = (l+r)/2;

//     if(pos <= m) {
//         update(2*id, l, m, pos, val);
//     }
    
//     else {
//         update(2*id+1, m+1, r, pos, val);
//     }

//     ST[id] = ST[2*id] + ST[2*id+1];
// }

ll query(int id, int l, int r, int u, int v) {
    if(v < l || r < u) {
        return 0;
    }

    if(u <= l && r <= v) {
        return ST[id];
    }

    int m = (l+r)/2;

    ll s1 = query(2*id, l, m, u, v);
    ll s2 = query(2*id+1, m+1, r, u, v);

    return s1+s2;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int n, q; cin >> n >> q;

    for(int i=0; i<n; ++i) cin >> x[i];

    build(1, 0, n-1);
    while(q--) {
        int a, b; cin >> a >> b;
        --a; --b;
        cout << query(1, 0, n-1, a, b) << "\n";
    }
    return 0;
}