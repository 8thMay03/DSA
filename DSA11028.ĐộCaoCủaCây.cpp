/*
    Author: kamine
    Created: 2025-03-11 13:46:01
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> adj[n + 1];
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> h(n + 1, 0), vis(n + 1, 0);
    int mx = 1;
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!vis[v]) {
                h[v] = h[u] + 1;
                mx = max(mx, h[v]);
                vis[v] = 1;
                q.push(v);
            }
        }
    }
    cout << mx << endl;
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
