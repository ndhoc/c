#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string s; cin >> s;
    map<char, bool> mp;
    
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(!mp[s[i]]){
            cnt++;
            mp[s[i]] = true;
        }
    }

    if(cnt % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    
    return 0;
}