/**
 *    newbie: ndhoc
 *    created: 2026-06-14 09:03:39
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 1000000 + 5;
bool is_prime[MAXN];

void Eratosthenes(int n) {
    for(int i=2; i<=n; ++i) {
        is_prime[i] = true;
    }
    
    for(int i=2; i*i<=n; ++i) {
        if(is_prime[i]) {
            for(int j=i*i; j<=n; j+=i) {
                is_prime[j] = false;
            }
        }
    }
}

bool digit_prime(int n) {
    while(n > 0) {
        int x = n%10;
        if(x != 2 && x != 3 && x != 5 && x != 7) return false;
        n /= 10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int T; cin >> T;

    while(T--) {
        int A, B; cin >> A >> B;
        Eratosthenes(B);
        int cnt = 0;
        for(int i=A; i<=B; ++i) {
            if(is_prime[i] && digit_prime(i)) ++cnt;
        }
        cout << cnt << "\n";
    }
    return 0;
}