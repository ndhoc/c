#include <bits/stdc++.h>
using namespace std;

long long n,m,a;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //freopen("hoc0g.inp", "r", stdin);
    cin>>n>>m>>a;
    cout << ((m+a-1)/a)*((n+a-1)/a);
    return 0;
}