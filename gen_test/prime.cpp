#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;

bool prime[MAXN + 1];
int pref[MAXN + 1];

bool goodDigit(int x) {
    while(x) {
        int d = x % 10;

        if(d != 2 && d != 3 && d != 5 && d != 7)
            return false;

        x /= 10;
    }

    return true;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    memset(prime, true, sizeof(prime));

    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= MAXN; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= MAXN; j += i)
                prime[j] = false;
        }
    }

    for(int i = 1; i <= MAXN; i++) {
        pref[i] = pref[i - 1];

        if(prime[i] && goodDigit(i))
            pref[i]++;
    }

    int T;
    cin >> T;

    while(T--) {
        int A, B;
        cin >> A >> B;

        cout << pref[B] - pref[A - 1] << '\n';
    }
}