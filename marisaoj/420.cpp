#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
    int a, b, c, x, y, z; cin >> a >> b >> c >> x >> y >> z;
    
    if (c != z) {
        if (c < z) cout << 1;
        else cout << 2;
    } else {
        if (b != y) {
            if (b < y) cout << 1;
            else cout << 2;
        } else {
            if (a < x) cout << 1;
            else cout << 2;
        }
    }
    
    return 0;
}