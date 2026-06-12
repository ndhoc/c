/**
 *    newbie: ndhoc
 *    created: 2026-06-12 10:20:25
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b; cin >> a >> b;
    int cnt = 0;
    while(a <= b) {
        a += 2;
        ++cnt;
    }

    cout << cnt;
    return 0;
}