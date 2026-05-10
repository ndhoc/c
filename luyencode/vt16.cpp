/**
 *    newbie: ndhoc
 *    created: 2026-05-10 09:09:19
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    vector<int> a;
    while(true){
        int n; cin >> n;
        if(n==0) break;
        else if (n<0) a.push_back(n);
        else continue;
    }
    if(a.size() == 0) cout << "NOT FOUND";
    else{
        for(int i=0; i<a.size(); ++i) cout << a[i] << " ";
    }
    return 0;
}