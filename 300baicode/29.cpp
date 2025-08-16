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
    db cv; cin>>cv;
    db r=cv/(2*3.14);
    db dt=3.14*r*r;
    cout<<fixed<<setprecision(2)<<dt;
    return 0;
}