#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n < 2) return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

bool good(int n) {
    if(!isPrime(n)) return false;

    while(n) {
        int d = n % 10;

        if(d != 2 && d != 3 && d != 5 && d != 7)
            return false;

        n /= 10;
    }

    return true;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);

    int T;
    cin >> T;

    while(T--) {
        int A, B;
        cin >> A >> B;

        int ans = 0;

        for(int i = A; i <= B; i++) {
            if(good(i)) ans++;
        }

        cout << ans << '\n';
    }
}