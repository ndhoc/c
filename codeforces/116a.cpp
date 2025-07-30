#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    int sum = 0;
    int p = -1e9;
    while(n--){
        int x, y; cin >> x >> y;
        sum -= x;
        sum += y;
        p = max(p, sum);
    }

    cout << p;
    return 0;
}