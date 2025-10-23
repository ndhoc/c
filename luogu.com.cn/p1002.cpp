//P1002 [NOIP 2002 普及组] 过河卒
//https://www.luogu.com.cn/record/224156388
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pf push_front
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define filein freopen("i.inp", "r", stdin)
#define fileout freopen("o.out", "w", stdout)

ll dp[36][36];
bool fuck[36][36];
int main() {
    //hoc0g
    fastio; //filein;
    int n,m,x,y; cin>>n>>m>>x>>y;
    //x+-2; y+-1;
    //x+-1; y+-2;
    n+=2;m+=2;x+=2;y+=2;

    int dx[] = {0, -2, -2, -1, -1, 1, 1, 2, 2};
    int dy[] = {0, -1, 1, -2, 2, -2, 2, -1, 1};
    for(int i=0; i<9; ++i) fuck[x+dx[i]][y+dy[i]]=true;
    dp[2][1] = 1;
    for(int i=2; i<=n; ++i){
        for(int j=2; j<=m; ++j){
            if(fuck[i][j]) continue;
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }
    cout << dp[n][m];
    
    
    return 0;
}