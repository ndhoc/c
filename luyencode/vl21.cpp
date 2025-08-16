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

int main() {
    op();
    int n; cin>>n;
    //(x*(x+1))/2<=n
    //x^2+x<=2n
    //x^2+x-2n<=0
    cout<<(-1+ll(sqrt(1+8*n)))/2;
    return 0;
}