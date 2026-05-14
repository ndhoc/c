#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll power_mod(ll a, ll n, ll m) {
    ll res = 1;
    a %= m;

    while (n > 0) {
        if (n % 2 == 1) {
            res = res * a % m;
        }

        a = a * a % m;
        n /= 2;
    }

    return res;
}

int main() {
    ll a, n, m;
    cin >> a >> n >> m;

    cout << power_mod(a, n, m);

    return 0;
}