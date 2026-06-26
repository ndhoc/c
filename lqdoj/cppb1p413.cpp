/**
 *    newbie: ndhoc
 *    created: 2026-06-26 21:32:32
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s, tu; getline(cin, s);
    
    stringstream ss(s);

    vector<string> name;

    while(ss >> tu) {
        name.push_back(tu);
    }

    cout << name[2] << " " << name[1] << " " << name[0];
    return 0;
}