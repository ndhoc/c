#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //freopen("hoc0g.inp", "r", stdin);
    int n; cin >> n;
    vector<string>a (n);
    
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    int cc = 1;
    for(int i=1; i<n; ++i){
        if(a[i-1]!=a[i]) cc++;
    }
    cout << cc;
    return 0;
}