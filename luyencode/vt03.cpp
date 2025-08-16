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
    int M=-1e9, iM=0;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x>=M){
            M=x; iM=i;
        }
    }
    cout<<iM;
    return 0;
}