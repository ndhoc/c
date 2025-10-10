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
        int cnta1=0, cnt0=0;
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            if(x==-1) cnta1++;
            if(x==0) cnt0++;
        }
        if(cnta1%2==0) cout << cnt0 << endl;
        else cout << cnt0+2 << endl;
    }
    return 0;
}
