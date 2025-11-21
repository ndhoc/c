/**
 *    author: ndhoc
 *    created: 2025-11-20 22:02:20
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define pii pair<int,int>
#define pll pair<long long,long long>
#define fi first
#define se second
#define si set<int>
#define sc set<char>
#define mii map<int,int>

#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);

ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve(){
    int n; cin>>n;
    vi a(n);
    for(int i=0; i<n; ++i) cin>>a[i];
    if(a[0]==-1 && a[n-1]==-1){
        a[0]=0;
        a[n-1]=0;
    }
    else if(a[0]==-1){
        a[0]=a[n-1];
    }
    else if(a[n-1]==-1){
        a[n-1]=a[0];
    }
    for(int i=1; i<n-1; ++i){
        if(a[i]==-1) a[i]=0;
    }
    cout<<abs(a[n-1]-a[0])<<"\n";
    for(int i=0; i<n; ++i) cout<<a[i]<<" ";
    cout<<"\n";
}

int main() {
    fast;
    int t; cin>>t; while(t--) solve();
    return 0;
}
