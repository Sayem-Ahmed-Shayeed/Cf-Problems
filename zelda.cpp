#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dfs(int v, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[v] = true;
    int max_depth = 0;

    for (int u : adj[v]) {
        if (!visited[u]) {
            int depth = 1 + dfs(u, adj, visited);
            max_depth = max(max_depth, depth);
        }
    }
    return max_depth;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        vector<bool> visited(n + 1, false);

        for (int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int min_operations = n - 1;  // Initialize with the maximum possible value

        for (int i = 1; i <= n; ++i) {
            fill(visited.begin(), visited.end(), false);
            int max_depth = dfs(i, adj, visited);
            min_operations = min(min_operations, max_depth);
        }

        cout << min_operations << endl;
    }

    return 0;
}
