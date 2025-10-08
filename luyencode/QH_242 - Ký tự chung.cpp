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
    freopen("KiTuChung.Inp","r",stdin);
    freopen("KiTuChung.Out","w",stdout);
    string a,b; cin>>a>>b;
    map<char,int> mp1, mp2;
    for(char c:a) mp1[c]++;
    for(char c:b) mp2[c]++;
    set<char> sett; 
    for(char c='a'; c<='z'; ++c){
        if(mp1[c]>0&&mp2[c]>0) sett.insert(c);
    }
    for(auto it:sett) cout<<it<<endl;
    return 0;
}
