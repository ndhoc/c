#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define vt vector
#define pii pair<int,int>
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    fast;
    int n; cin>>n;
    int m=1001, M=-1001;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        m=min(m,x);
        M=max(M,x);
    }
    cout << M << " " << m;
    return 0;
}
