#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> f(n);
    f[0] = f[1] = 1;

    for (int i = 2; i < n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    n--;

    while (n > 1) {
        if (k <= f[n - 1]) {
            n--;
        } else {
            k -= f[n - 1];
            n -= 2;
        }
    }

    if (n == 0) cout << "N";
    else cout << "A";
}