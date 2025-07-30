#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<int> a;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] != '+') a.push_back(s[i] - '0'); 
    }

    sort(a.begin(), a.end());
    string res;
    for(int i = 0; i < a.size()-1; ++i){
        res += to_string(a[i]);
        res += '+';
    }
    res += to_string(a[a.size()-1]);
    cout << res;
    return 0;
}