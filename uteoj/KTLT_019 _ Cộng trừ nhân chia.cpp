#include <iostream>
using namespace std;

bool checkVar (int a, int b, int c){
    return (a + b == c || a - b == c || a * b == c || (b != 0 && a % b == 0 && a / b == c));
}

int main() {
    int q; cin >> q;
    while(q--){
        int a, b, c;
        cin >> a >> b >> c;
        if(checkVar(a,b,c) || checkVar(a,c,b) || checkVar(b,a,c) || checkVar(b,c,a) || checkVar(c,a,b) || checkVar(c,b,a)) cout << "Possible\n";
        else cout << "Impossible\n";
    }
    return 0;
}
