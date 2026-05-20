/**
 *    newbie: ndhoc
 *    created: 2026-05-20 19:45:13
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 1e5+5;

bool mark[MAXN];
vector<int> adj[MAXN];

void dfs(int u){
    mark[u] = 1;
    for(int v:adj[u])
    if(!mark[v]) dfs(v);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m; cin >> n >> m;
    int t=m;
    while(t--){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt=0;
    for(int i=1; i<=n; ++i){
        if(!mark[i]){
            ++cnt;
            dfs(i);
        }
    }
    cout << cnt;
    return 0;
}