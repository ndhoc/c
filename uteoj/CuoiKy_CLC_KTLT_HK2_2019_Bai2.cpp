#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int tum, maum; cin >> tum >> maum; //Nhap phan so dau tien

    int tu, mau, mi;
    for(int i = 1; i < n; ++i){
        cin >> tu >> mau;

        if(1LL * tu * maum > 1LL * tum * mau){
            tum = tu;
            maum = mau;
            mi = i;

        }
    }
    cout << mi;
    return 0;
}
