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

bool check2(vector<vector<int>>& a, int n) {
    for (int i = 1; i <= n; i++) {
        if (a[i].size() & 1) {
            return false;
        }
    }
    return true;
}

bool check1(vector<vector<int>>& a, int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i].size() & 1) {
            cnt++;
        }
    }
    return cnt == 2;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n + 1);
    while (m--) {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    if (check1(a, n)) {
        cout << 1 << endl;
        return;
    }
    if (check2(a, n)) {
        cout << 2 << endl;
        return;
    }
    cout << 0 << endl;
}

int main() {
    faster();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
