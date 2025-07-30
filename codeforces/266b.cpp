#include <bits/stdc++.h>
using namespace std;

int n,t; string s;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //freopen("hoc0g.inp", "r", stdin);
    
    cin >> n >> t;
    cin >> s;

    while(t--){
        bool check = false;
        for(int i=0; i<n-1; ++i){
            if(check){
                check=false;
                continue;
            }
            else{
                if(s[i]=='B' && s[i+1]=='G'){
                    swap(s[i],s[i+1]);
                    check=true;
                }
            }
        }
    }
    cout << s;
    return 0;
}