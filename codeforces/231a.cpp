#include <iostream>
using namespace std;

int a[1001][1001];

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        int cnt1 = 0;
        for(int j = 0; j < 3; ++j){
            cin >> a[i][j];
            if(a[i][j] == 1) cnt1++; 
        }
        if(cnt1 >= 2) cnt++;
    }
    cout << cnt;
}