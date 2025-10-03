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
    int n; cin>>n;
    unordered_map<int,int> mp;
    for(int i=0; i<n; ++i){
        int x; cin>>x;
        mp[x]++;
    }
    for(int i=1; i<=n; ++i){
        if(mp.count(i)==0){
            cout << i;
            break;
        }
    }
    return 0;
}
