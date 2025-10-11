#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define vt vector
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    op();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<int> sez;
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            sez.insert(x);
        }
        cout << sez.size() << endl;
    }
    return 0;
}
