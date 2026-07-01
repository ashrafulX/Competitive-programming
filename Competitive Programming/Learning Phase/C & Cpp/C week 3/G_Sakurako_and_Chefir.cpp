#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXN = 200005;
vector<int> adj[MAXN];
int depth[MAXN], dist[MAXN];

// Function to compute depth and distance from root using BFS
void bfs(int root) {
    queue<int> q;
    q.push(root);
    dist[root] = 0;
    depth[root] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int v : adj[node]) {
            if (v != depth[node]) {
                depth[v] = node;
                dist[v] = dist[node] + 1;
                q.push(v);
            }
        }
    }
}

// Function to compute maximum reachable distance from vi given stamina ki
int farthest_distance(int vi, int ki, int n) {
    int max_dist = min(dist[vi] + ki, n - 1);
    return max_dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            adj[i].clear();
        }

        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bfs(1);  // Start BFS from root (vertex 1)

        int q;
        cin >> q;

        while (q--) {
            int vi, ki;
            cin >> vi >> ki;
            cout << farthest_distance(vi, ki, n) << " ";
        }
        cout << "\n";
    }

    return 0;
}
