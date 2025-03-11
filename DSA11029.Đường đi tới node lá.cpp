#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<set<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        if (u > v) swap(u, v);
        adj[u].insert(v);
        adj[v].insert(u);
    }
    vector<int> par(n + 1, 1), vis(n + 1, 0);
    queue<int> q;
    vis[1] = 1;
    q.push(1);
    set<int> leaves;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        bool is_leaf = true;
        for (int v : adj[u]) {
            if (!vis[v]) {
                is_leaf = false;
                par[v] = u;
                q.push(v);
                vis[v] = 1;
            }
        }
        if (is_leaf) {
            leaves.insert(u);
        }
    }
    for (int leaf : leaves) {
        vector<int> path;
        while (leaf != 1) {
            path.push_back(leaf);
            leaf = par[leaf];
        }
        path.push_back(1);
        reverse(path.begin(), path.end());
        for (int u : path) {
            cout << u << ' ';
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
