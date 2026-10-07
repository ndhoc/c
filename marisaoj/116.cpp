#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> adj(n+1);

    for(int i=0; i<m; ++i) {
        int u, v; cin >> u >> v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dist(n+1, -1);
    queue<int> q;

    dist[1] = 0;
    q.push(1);

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int v : adj[u]) {
            if(dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    for(int i=2; i<=n; ++i) cout << dist[i] << " ";

    return 0;
}