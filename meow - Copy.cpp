#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int find_diameter(const vector<vector<int>>& tree, int n) {
    // Perform a breadth-first search from an arbitrary vertex to find the farthest vertex.
    vector<bool> visited(n + 1, false);
    vector<int> distance(n + 1, 0);

    queue<pair<int, int>> q;  // (vertex, distance)
    q.push({1, 0});  // Start BFS from vertex 1
    visited[1] = true;

    while (!q.empty()) {
        int current = q.front().first;
        int dist = q.front().second;
        q.pop();

        distance[current] = dist;

        for (int neighbor : tree[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, dist + 1});
            }
        }
    }

    // Find the farthest vertex from the first BFS
    auto max_dist = max_element(distance.begin(), distance.end());
    int farthest_vertex = distance.begin() + distance.size() - 1;

    // Perform another BFS from the farthest vertex to find the diameter
    fill(visited.begin(), visited.end(), false);
    fill(distance.begin(), distance.end(), 0);

    q.push({farthest_vertex, 0});
    visited[farthest_vertex] = true;

    while (!q.empty()) {
        int current = q.front().first;
        int dist = q.front().second;
        q.pop();

        distance[current] = dist;

        for (int neighbor : tree[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, dist + 1});
            }
        }
    }

    int diameter = *max_element(distance.begin(), distance.end());
    return diameter;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        vector<vector<int>> tree(n + 1);
        for (int j = 0; j < n - 1; ++j) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        int diameter = find_diameter(tree, n);
        cout << diameter << endl;
    }

    return 0;
}
