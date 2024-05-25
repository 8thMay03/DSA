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

void Try(int i, vector<vector<int>> a, vector<int> v, vector<int>& vis, vector<vector<int>>& ans, int sum, int k) {
    for (int j = 0; j < a.size(); j++) {
        if (!vis[j]) {
            sum += a[i][j];
            vis[j] = 1;
            v.push_back(j);
            if (i == a.size() - 1) {
                if (sum == k) {
                    ans.push_back(v);
                }
            } else {
                Try(i + 1, a, v, vis, ans, sum, k);
            }
            v.pop_back();
            vis[j] = 0;
            sum -= a[i][j];
        }
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int>> ans;
    vector<int> vis(n, 0);
    Try(0, a, {}, vis, ans, 0, k);
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] + 1 << " ";
        }
        cout << endl;
    }
}

int main() {
    faster();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
