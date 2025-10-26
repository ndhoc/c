#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a[1000][3]; cin>>n;
    for(int i=0; i<n; ++i){
        for(int j=0; j<3; ++j){
            cin>>a[i][j];
        }
    }
    int bt = 0;
    for(int i=0; i<n; ++i){
        int count = 0;
        for(int j=0; j<3; ++j){
            if (a[i][j] == 1){
                count++;
            }
        }
        if(count > 1){
            bt++;
        }
    }
    cout << bt;
    return 0;
}