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
    op(); bool check=false;
    int a,b;cin>>a>>b;
    int M = max(a,b);
    int m = min(a,b);
    for(int i=M-1; i>m; i--){
        if(i%3==0){
            check=true;
            cout<<i<<" ";
        }
    }
    if(!check) cout<<"NOT FOUND";
    return 0;
}