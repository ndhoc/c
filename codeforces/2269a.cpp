#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        cout << (int)pow(2, n-k+1) + 2 * (--k) << "\n";
    }
    return 0;
}