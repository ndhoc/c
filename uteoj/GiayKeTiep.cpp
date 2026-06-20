/**
 *    newbie: ndhoc
 *    created: 2026-06-20 10:13:26
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int h, m ,s; cin >> h >> m >> s;
    
    ++s;
    if (s == 60) {
        s = 0; ++m;
        if (m == 60) {
            m = 0; ++h;
            if (h == 24) {
                h = 0;
            }
        }
    }
    cout << h << " " << m << " " << s;
    return 0;
}