#include <bits/stdc++.h>

#define int long long
#define fi first
#define se second
#define pb push_back
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define faster() ios::sync_with_stdio(false); cin.tie(0);
#define pi 3.14159265358979323846
#define N 1000005

using namespace std;

template <typename T> istream& operator >> (istream& in, vector<T>& vec) {for (T& element : vec) in >> element; return in;}
template <typename T> ostream& operator << (ostream& out, vector<T>& vec) {for (T& element : vec) out << element << " "; return out;}
template <typename T> ostream& operator << (ostream& out, set<T>& st) {for (const T& element : st) out << element << " "; return out;}

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = this->right = nullptr;
    }
};

void add(Node* par, Node* child, char c) {
    if (c == 'L') {
        par->left = child;
    } else {
        par->right = child;
    }
}

void solve() {
    int n, par, child;
    char c;

    cin >> n >> par >> child >> c;
    unordered_map<int, Node*> mp;
    Node* root = new Node(par);
    mp[par] = root;
    Node* node = new Node(child);
    mp[child] = node;
    add(mp[par], mp[child], c);

    for (int i = 1; i < n; i++) {
        cin >> par >> child >> c;
        mp[child] = new Node(child);
        add(mp[par], mp[child], c);
    }

    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            auto cur = q.front();
            q.pop();
            cout << cur->val << " ";
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }        
    }
    
    cout << endl;
}

signed main() {
    faster();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
