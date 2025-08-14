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

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {
    op();int a,b;cin>>a>>b;
    cout<<gcd(abs(a),abs(b));
    return 0;
}