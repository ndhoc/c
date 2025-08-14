#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    long long n; cin >> n;
    string s = "";
    while(n>0){
      s += (n%2) + '0';
      n /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
  }
  return 0;
}
