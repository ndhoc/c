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

ll revNum(ll n){
    ll res = 0;
    while(n>0){
        res = res*10 + n%10;
        n/=10;
    }
    return res;
}

int main() {
    fast;
    ll a,b; cin>>a>>b;
    ll sum = a+b;
    cout<<revNum(a+b);
    return 0;
}
