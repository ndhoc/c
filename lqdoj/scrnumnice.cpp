/**
 *    newbie: ndhoc
 *    created: 2026-06-26 21:56:15
**/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1'000'000'005;

int sd(int n) {
    int r = 0;
    while(n!=0) {
        r += n%10;
        n /= 10; 
    }
    return r;
}

int asd[MAXN];

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int q; cin >> q;

    for(int i=0; i<=MAXN; ++i) {
        if(i<10) asd[i] = i;
        else{
            int s=0;
            while(i>10) {
                s = sd(i);
            }
            asd[i] = s;
        }
    }

    while(q--) {
        int x,l,r; cin >> x >> l >> r;
        int cnt = 0;
        for(int i=l; i<=r; ++i) {
            if(asd[i]==x) ++cnt;
        }
        cout << cnt << "\n";
    }
    
    return 0;
}