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

using namespace std;

template <typename T> istream& operator >> (istream& in, vector<T>& vec) {for (T& element : vec) in >> element; return in;}
template <typename T> ostream& operator << (ostream& out, vector<T>& vec) {for (T& element : vec) out << element << " "; return out;}
template <typename T> ostream& operator << (ostream& out, set<T>& st) {for (const T& element : st) out << element << " "; return out;}

void solve() {
    int n;
    cin >> n;
    int it2 = 0, it3 = 0, it5 = 0;
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++) {
        dp[i] = min({dp[it2] * 2, dp[it3] * 3, dp[it5] * 5});
        if (dp[i] == dp[it2] * 2) it2++;
        if (dp[i] == dp[it3] * 3) it3++;
        if (dp[i] == dp[it5] * 5) it5++;
    }
    cout << dp.back() << endl;
}

int main() {
    faster();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
