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
    int a,b,c; cin>>a>>b>>c;
    double p = (a+b+c)/2.0;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    double r = (a*b*c)/(4*s);
    cout<<fixed<<setprecision(3)<<r;
    return 0;
}
