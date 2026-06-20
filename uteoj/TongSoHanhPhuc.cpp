/**
 *    newbie: ndhoc
 *    created: 2026-06-20 10:59:42
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int sn(int n) {
    int s = 0;
    while(n!=0) {
        int r = n % 10;
        s += r * r;
        n /= 10;
    }
    return s;
}

bool shf(int n) {
    set<int> se;
    while(n!=1 && !se.count(n)) {
        se.insert(n);
        n = sn(n);
    }
    return n == 1;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    
    vector<int> a(n);

    int ans = 0;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        if(shf(a[i])) ans+=a[i];
    }

    cout << ans;
    return 0;
}