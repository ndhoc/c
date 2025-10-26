#include <iostream>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int a[105][105];
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
        }
    }
    for(int j = 1; j <= m; ++j){
        long long tong = 0;
        for(int i = 1; i <= n; ++i){
            tong += a[i][j];
        }
        cout << tong << " ";
    }
    return 0;
}