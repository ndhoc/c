#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool checkVar(string &s, string t){
    reverse(s.begin(), s.end());
    if(s == t) return true;
    else return false;
}

int main(){
    string s, t; cin >> s >> t;
    if(checkVar(s, t)) cout << "YES";
    else cout << "NO";
    return 0;
}