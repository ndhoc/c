#include <iostream>
#include <string>
using namespace std;


int main(){
    int n; cin >> n;
    
    while(n--){
        string s; cin >> s;
        if(s.size() <= 10) cout << s << endl;
        else{
            string sub = s.substr(1, s.size()-2);
            cout << s[0] << sub.size() << s[s.size()-1] << endl;
        }
    }
    return 0;
}