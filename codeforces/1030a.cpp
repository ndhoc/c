#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;

    int cnt = 0;

    int a[100];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] == 1) cnt++;
    }

    if(cnt > 0) cout << "HARD";
    else cout << "EASY";
    return 0;
}