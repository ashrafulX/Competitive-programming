#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;

pair<int, int> bfs(int source, int n) {
    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(source);
    dist[source] = 0;
    
    int farthest = source;
    int maxDist = 0;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
                if (dist[v] > maxDist) {
                    maxDist = dist[v];
                    farthest = v;
                }
            }
        }
    }
    
    return {farthest, maxDist};
}

int solve() {
    int n;
    cin >> n;
    
    adj.assign(n + 1, vector<int>());
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    auto [end1, _] = bfs(1, n);
    auto [end2, diameter] = bfs(end1, n);
    
    if (diameter <= 2) return 0;
    return diameter - 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        cout << solve() << "\n";
    }
    
    return 0;
}
