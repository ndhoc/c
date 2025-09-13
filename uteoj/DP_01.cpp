#include <iostream>
using namespace std;

int dp[10005];
int main(){
    int n,l[10005],h[10005]; cin>>n;
    for(int i=1; i<=n; ++i) cin>>l[i];
    for(int i=1; i<=n; ++i) cin>>h[i];
    dp[1] = l[1];
    for(int i=2; i<=n; ++i){
        dp[i]=max(h[i]+dp[i-2], l[i]+dp[i-1]);
    }
    cout<<dp[n];
    return 0;
}
