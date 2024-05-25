#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mii map<int, int>
#define mll map<ll, ll>
#define faster() ios::sync_with_stdio(false); cin.tie(0);
#define pi 3.14159265358979323846

using namespace std;

template <typename T> istream& operator >> (istream& in, vector<T>& vec) {for (T& element : vec) in >> element; return in;}
template <typename T> ostream& operator << (ostream& out, vector<T>& vec) {for (T& element : vec) out << element << " "; return out;}
template <typename T> ostream& operator << (ostream& out, set<T>& st) {for (const T& element : st) out << element << " "; return out;}

int n, m;
vector<set<int>> a(1005);
vector<bool> vis(1005);
vector<int> ans;

void dfs(int u) {
	vis[u] = true;
	for (int v : a[u]) {
		if (!vis[v]) {
            dfs(v);
        }
	}
}

void sol() {
	for (int i = 1; i <= n; i++) {
        vis[i] = true;
        if (i == 1) {
            dfs(2);
        } else {
            dfs(1);
        }
        for (int j = 1; j <= n; j++) {
            if (j == i) {
                continue;
            }
            if (!vis[j]) {
                ans.push_back(i);
                break;
            }
        }
        for (int j = 1; j <= n; j++) {
            vis[j] = false;
        }
    }
}

int main() {
	int t;
	cin >> t;
	while (t--) {
        ans.clear();
        for (int i = 0; i < 1005; i++) {
            a[i].clear();
            vis[i] = false;
        }
		cin >> n >> m;
		for (int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			a[x].insert(y);
			a[y].insert(x);
		}
		sol();
		cout << ans << endl;
	}
}
