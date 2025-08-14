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
    if(b==0) return a;
    return  gcd(b,a%b);
}

void solve(){
    if(b==0){
        cout<<"INVALID";
        return;
    }
    int c=gcd(a,b);
    a/=c;
    b/=c;
    if(b<0){
        if(a<0){
            a*=-1;
            b*=-1;
        }
        else{
            a*=-1;
            b*=-1;
        }
    }
    if(b==1) cout<<a;
    else cout<<a<<" "<<b;
}

int main() {
    op(); cin>>a>>b;
    solve();
    return 0;
}