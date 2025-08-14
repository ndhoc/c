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

int a,b;
int gcd(){
    a=abs(a);
    b=abs(b);
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(){
    return abs(a/gcd(a,b)*b);
}

int main() {
    op(); cin>>a>>b;
    cout<<lcm(a,b);
    return 0;
}