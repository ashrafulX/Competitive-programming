#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

int n;
vector<int> left_child, right_child;
vector<long long> g, answer;

long long dfs(int node, long long parent_sum) {
    // Base case: leaf node
    if (left_child[node] == 0 && right_child[node] == 0) {
        g[node] = 1;
        answer[node] = (parent_sum + 1) % MOD;
        return 1;
    }
    
    // Recursively process children
    long long left_g = 0, right_g = 0;
    
    if (left_child[node]) {
        left_g = dfs(left_child[node], parent_sum);
    }
    if (right_child[node]) {
        right_g = dfs(right_child[node], parent_sum);
    }
    
    // Compute g for current node
    g[node] = (3 + left_g + right_g) % MOD;
    
    // Compute answer for current node
    answer[node] = (parent_sum + g[node]) % MOD;
    
    // Update parent_sum for children
    long long new_sum = answer[node];
    if (left_child[node]) {
        answer[left_child[node]] = new_sum;
    }
    if (right_child[node]) {
        answer[right_child[node]] = new_sum;
    }
    
    return g[node];
}

void solve() {
    cin >> n;
    
    left_child.assign(n + 1, 0);
    right_child.assign(n + 1, 0);
    g.assign(n + 1, 0);
    answer.assign(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> left_child[i] >> right_child[i];
    }
    
    dfs(1, 0);
    
    for (int i = 1; i <= n; i++) {
        cout << answer[i];
        if (i < n) cout << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}