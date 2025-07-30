#include <iostream>
using namespace std;

int n;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin >> n;
    int m = 0;
    while(n--){
        string s; cin >> s;
        string l = s.substr(0, 2);
        string r = s.substr(1, 3);
        
        if(l == "++" || r == "++"){
            m++;
        }
        else if(l == "--" || r == "--"){
            m--;
        }
    }

    cout << m;
}