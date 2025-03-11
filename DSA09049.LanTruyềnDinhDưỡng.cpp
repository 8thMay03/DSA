/*
    Author: kamine
    Created: 2025-03-11 15:14:18
*/
#include <bits/stdc++.h>

#define int long long

using namespace std;

// Giá trị tại mỗi nút = số nút của subtree mà nút đó là gốc + tổng giá trị của các nút con
// Dùng DFS duyệt từ lá 

const int N = 200001;
int n;
vector<int> adj[N], val(N), sz(N, 1);

void dfs(int u) {
    if (adj[u].empty()) {
        val[u] = 1; 
        return;
    }
    int sum_path = 0;
    for (int v : adj[u]) {
        dfs(v);
        sz[u] += sz[v];
        sum_path += val[v]; 
    }
    val[u] = sum_path + sz[u];
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int child = 2; child <= n; child++) {
        int x;
        cin >> x;
        adj[x].push_back(child);
    }
    dfs(1);
    for (int i = 1; i <= n; i++) {
        cout << val[i] << ' ';
    }
}
