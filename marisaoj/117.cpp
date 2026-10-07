#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio;
    cin.tie(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> adj(n+1);

    for(int i=0; i<m; ++i) {
        int u, v; cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dist(n+1, -1);
    vector<int> parent(n+1, -1);
    queue<int> q;

    dist[1] = 0;
    q.push(1);

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int v : adj[u]) {
            if(dist[v] == -1) {
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    cout << dist[n] << "\n";
    
    vector<int> path;

    for(int v=n; v!=-1; v = parent[v]) {
        path.push_back(v);
    }

    reverse(path.begin(), path.end());

    for (int v : path) cout << v << " ";
    return 0;
}