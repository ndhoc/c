#include <bits/stdc++.h>
using namespace std;


int main(){
    bool checkVar = false;
    int a[1005], n, x; cin >> n >> x;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(x == a[i]) checkVar = true;
    }
    if(checkVar) cout << "YES";
    else cout << "NO";
    return 0;
}