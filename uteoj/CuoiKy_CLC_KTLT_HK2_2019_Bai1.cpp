#include <bits/stdc++.h>
using namespace std;

//Công thức tổng từ 1 đến n là [n*(n+1)]/2;

int sumN(int n){
    if(n%2 == 0) return (-1)*((n*(n+1))/2);
    else return (n*(n+1))/2;
}

int main(){
    int n, sum = 0;; cin >> n;

    for(int i = 1; i <= n; ++i){
        sum += sumN(i);
    }

    cout << sum;
    return 0;
}
