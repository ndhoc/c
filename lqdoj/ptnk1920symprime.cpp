/**
 *    newbie: ndhoc
 *    created: 2026-06-25 22:27:07
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 2*1e7;

bool is_prime[MAXN+5];
int prime_dx[MAXN+5];

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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    Eratosthenes(MAXN);

    vector<int> prime;

    for(int i=2; i<=MAXN; ++i) {
        if(is_prime[i]) prime.push_back(i);
    }

    for(int i=1; i<(int)prime.size()-1; ++i) {
        if(prime[i]*2 == prime[i-1] + prime[i+1]) prime_dx[prime[i]] = prime[i];
    }

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << ((n <= MAXN && prime_dx[n] != 0) ? "YES\n":"NO\n"); 
    }
    return 0;
}