#include <bits/stdc++.h>
using namespace std;

int a[1005];
int main(){
    int n, x; cin >> n >> x;
    int count = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] == x) count++;
    }
    cout << count;
    return 0;
}