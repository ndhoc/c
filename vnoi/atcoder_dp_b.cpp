#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    vector<int> a(n), f(n, 1e9);

    for(int i = 0; i < n; ++i) cin >> a[i];

    f[0] = 0; // chi phí d?n hòn dá d?u tiên là 0

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j <= k; ++j) {
            if (i - j >= 0) {
                f[i] = min(f[i], f[i - j] + abs(a[i] - a[i - j]));
            }
        }
    }

    cout << f[n - 1];
    return 0;
}
