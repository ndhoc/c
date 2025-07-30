#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    int l = 0, u = 0;
    for(int i = 0; i < s.size(); ++i){
        if(islower(s[i])) l++;
        else u++;
    }

    for(int i = 0; i < s.size(); ++i){
        if(l < u) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }

    cout << s;
    return 0;
}