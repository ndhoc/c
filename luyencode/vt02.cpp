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
    int M1 = -1e9, M2=-1e9;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x>M1){
            M2 = M1;
            M1 = x;
        }
        else if(x>M2&&x<M1){
            M2 = x;
        }
    }
    if(M2==-1e9) cout<<"NOT FOUND";
    else cout<<M2;
    return 0;
}