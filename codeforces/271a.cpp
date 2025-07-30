#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //freopen("hoc0g.inp", "r", stdin);
    int y; cin >> y;
    string ans;
    for(int i=y+1; i<=9999; ++i){
        string s = to_string(i);
        set<char> se(s.begin(),s.end());
        if(se.size()==s.size()) {ans=s;break;}
    }
    cout << ans;
    return 0;
}