#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define vt vector
#define pii pair<int,int>
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

bool snt(int n){
    for(int i=2; i*i<=n; ++i){
        if(n%i==0) return false;
    }
    return n>1;
}

int main() {
    op();
    set<int> se;
    int n; cin>>n;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        if(snt(x)) se.insert(x);
    }
    for(auto z: se){
        cout<<z<<" ";
    }
    return 0;
}
