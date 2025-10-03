#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define vt vector
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    op();
    string s; cin>>s;
    int cnt=1,M=1;
    for(int i=1; i<s.size(); ++i){
        if(s[i-1]==s[i]){
            cnt++;
            M=max(M,cnt);
        }
        else cnt=1;
    }
    cout << M;
    return 0;
}
