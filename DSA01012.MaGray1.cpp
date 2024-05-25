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

void solve() {
    int n;
    cin >> n;
    vector<string> gray = {"0", "1"};
    n--;
    while (n--) {
        vector<string> temp = gray;
        reverse(all(temp));
        for (int i = 0; i < gray.size(); i++) {
            gray[i] = "0" + gray[i];
            temp[i] = "1" + temp[i];
        }
        gray.insert(gray.end(), all(temp));
    }
    cout << gray << endl;
}

int main() {
    faster();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
