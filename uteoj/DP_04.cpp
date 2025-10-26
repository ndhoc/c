#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) cin >> p[i];

    int min_price = p[0];
    int max_profit = 0;

    for (int i = 1; i < n; ++i) {
        max_profit = max(max_profit, p[i] - min_price);
        min_price = min(min_price, p[i]);
    }

    cout << max_profit << endl;
    return 0;
}
