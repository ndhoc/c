#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, h; cin >> n >> h;
    int a[1001];
    int w = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] > h) w += 2;
        else w += 1;
    }

    cout << w;
    return 0;
}