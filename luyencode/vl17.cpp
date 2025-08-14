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
    op();int a,cnt=1;cin>>a; a=abs(a);
    for(int i=1; i<=a/2; i++){
        if(a%i==0) cnt++;
    }
    cout<<cnt;
    return 0;
}