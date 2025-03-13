/*
    Author: kamine
    Created: 2025-03-13 08:59:13
*/
#include <bits/stdc++.h>

using namespace std;

int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int germs = 0;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 2) q.emplace(i, j);
            germs += (a[i][j] == 1);
        }
    }
    int ans = 0;
    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            auto [x, y] = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == 1) {
                    a[nx][ny] = 2;
                    q.emplace(nx, ny);
                    germs--;
                }
            }
        }
        ans++;
        if (germs == 0) break;
    }
    if (germs > 0) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
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
