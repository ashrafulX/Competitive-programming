#include <bits/stdc++.h>
using namespace std;

int calculateF(const vector<pair<int, int>>& pairs) {
    if (pairs.empty()) return 0;
    
    vector<pair<int, int>> events;
    for (auto& p : pairs) {
        events.push_back({p.first, 1});  // start
        events.push_back({p.second, -1}); // end
    }
    
    sort(events.begin(), events.end());
    
    int active = 0;
    int result = 0;
    int lastPos = -1;
    
    for (auto& event : events) {
        int pos = event.first;
        int type = event.second;
        
        if (active > 0 && lastPos != -1) {
            result += pos - lastPos;
        }
        
        active += type;
        lastPos = pos;
    }
    
    return result;
}

int calculateG(const vector<pair<int, int>>& pairs, int maxNode) {
    if (pairs.empty()) return 0;
    
    vector<vector<int>> adj(maxNode + 1);
    set<int> allNodes;
    
    for (auto& p : pairs) {
        adj[p.first].push_back(p.second);
        adj[p.second].push_back(p.first);
        allNodes.insert(p.first);
        allNodes.insert(p.second);
    }
    
    vector<bool> visited(maxNode + 1, false);
    int totalInCycles = 0;
    
    for (int startNode : allNodes) {
        if (visited[startNode]) continue;
        
        // Find connected component
        vector<int> component;
        queue<int> q;
        q.push(startNode);
        visited[startNode] = true;
        
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            component.push_back(u);
            
            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        
        // Count edges in this component
        int edges = 0;
        for (int node : component) {
            edges += adj[node].size();
        }
        edges /= 2; // Each edge counted twice
        
        int nodes = component.size();
        
        // If edges >= nodes, then there's at least one cycle
        // In that case, all nodes in the component are part of some cycle
        if (edges >= nodes) {
            totalInCycles += nodes;
        }
    }
    
    return totalInCycles;
}

void solve() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> pairs(n);
    int maxNode = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> pairs[i].first >> pairs[i].second;
        maxNode = max(maxNode, pairs[i].second);
    }
    
    int bestValue = 0;
    vector<int> bestIndices;
    
    // For small n, use brute force
    if (n <= 20) {
        for (int mask = 0; mask < (1 << n); mask++) {
            vector<pair<int, int>> subset;
            vector<int> indices;
            
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    subset.push_back(pairs[i]);
                    indices.push_back(i + 1);
                }
            }
            
            int f = calculateF(subset);
            int g = calculateG(subset, maxNode);
            int value = f - g;
            
            if (value > bestValue) {
                bestValue = value;
                bestIndices = indices;
            }
        }
    } else {
        // For larger n, use greedy approach or other heuristics
        // Start with all pairs and try removing those that create cycles
        vector<int> indices;
        for (int i = 0; i < n; i++) {
            indices.push_back(i + 1);
        }
        
        int f = calculateF(pairs);
        int g = calculateG(pairs, maxNode);
        bestValue = f - g;
        bestIndices = indices;
        
        // Try removing pairs one by one to see if we can improve
        for (int i = 0; i < n; i++) {
            vector<pair<int, int>> subset;
            vector<int> newIndices;
            
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    subset.push_back(pairs[j]);
                    newIndices.push_back(j + 1);
                }
            }
            
            f = calculateF(subset);
            g = calculateG(subset, maxNode);
            int value = f - g;
            
            if (value > bestValue) {
                bestValue = value;
                bestIndices = newIndices;
            }
        }
    }
    
    cout << bestIndices.size() << "\n";
    if (!bestIndices.empty()) {
        for (int i = 0; i < bestIndices.size(); i++) {
            if (i > 0) cout << " ";
            cout << bestIndices[i];
        }
        cout << "\n";
    } else {
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}