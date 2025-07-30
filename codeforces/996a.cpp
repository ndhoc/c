#include <bits/stdc++.h>
using namespace std;

int cnt;
int i;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int a[] = {100,20,10,5,1};
  for(int i=0; i<5; ++i){
    cnt += n/a[i];
    n%=a[i];
  }
  cout << cnt;
  return 0;
}