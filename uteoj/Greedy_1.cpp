#include <iostream>

using namespace std;

int n, c, l, a[105];

int main(){
   cin >> n >> l >> c;
   for(int i = 0; i < n; ++i){
      cin >> a[i];
   }
   int ans = 0, j = 0;
   for(int i = 1; i < n; ++i){
      if(a[i] - a[j] > c){
         ans++;
         j=i-1;
      }
   }
   cout << ans;
   return 0;
}