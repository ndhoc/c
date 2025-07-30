#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int cnt = 0;
    while(n--){
        int p,q; cin>>q>>p;
        if(p-q>=2) cnt++;        
    }
    cout << cnt;
    return 0;
}