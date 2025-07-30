#include <iostream>
using namespace std;

int main(){
    int k, n, w; cin >> k >> n >> w;
    int g = 0;

    
    for(int i = 1; i <= w; ++i){
        g += i*k;
    }
    if(n >= g) cout << 0;
    else cout << abs(n - g);
    return 0;
}