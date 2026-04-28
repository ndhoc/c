/**

 *    newbie: ndhoc
 *    created: 2026-04-28 21:46:02
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    long long n; cin >> n; cout << n << " ";
    while(n>1){
        if(n%2 == 0) n/=2;
        else n = n*3+1;
        cout << n << " ";
    }   
    return 0;
}
