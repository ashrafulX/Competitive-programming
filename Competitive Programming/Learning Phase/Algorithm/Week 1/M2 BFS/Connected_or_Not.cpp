#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    unordered_map<int, unordered_set<int>> graph;
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].insert(v);
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int a, b;
        cin >> a >> b;
        
        if (graph[a].count(b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}