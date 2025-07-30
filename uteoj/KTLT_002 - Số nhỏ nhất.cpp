//code by Huy Đinh
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string rr(int n){
    string s = "";
    while(n > 0){
        if(n > 9){
            s += '9';
            n -= 9;
        }
        else{
            s += n + '0';
            n = 0;
        }
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    int n; cin >> n;
    cout << rr(n);
    return 0;
}
