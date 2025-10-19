/**
 *    author: ndhoc
 *    created: 2025-10-19 20:37:11
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool palindrome(string s){
    string s2 = s;
    reverse(s2.begin(),s2.end());
    return s2==s;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        if(palindrome(s)) cout<<0<<"\n\n";
        else{
            vector<int> ans;
            for(int i=0; i<n; ++i){
                if(s[i]=='1') ans.push_back(i+1);
            }
            if(ans.empty()){
                for(int i=0; i<n; ++i) ans.push_back(i+1);
            }
            cout<<(int)ans.size()<<"\n";
            for(int i=0; i<(int)ans.size(); ++i) cout<<ans[i]<<" ";
            cout << "\n";
        }
    }
    return 0;
}
