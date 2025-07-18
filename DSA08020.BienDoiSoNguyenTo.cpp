/*
    Author: kamine
    Created: 2025-07-18 09:37:18
*/
#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

unordered_set<string> primes;
unordered_map<string, int> visited;

void sieve() {
    for (int i = 1000; i <= 9999; i++) {
        if (is_prime(i)) {
            primes.insert(to_string(i));
        }
    }
}

void solve() {
    visited.clear();
    string S, T;
    cin >> S >> T;
    if (S == T) {
        cout << 0 << endl;
        return;
    }
    queue<pair<string, int>> q;
    q.push({S, 0});
    visited[S] = 1;
    while (!q.empty()) {
        auto [s, step] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            string tmp = s;
            for (char c = '0'; c <= '9'; c++) {
                if (c == tmp[i]) {
                    continue;
                }
                tmp[i] = c;
                if (primes.count(tmp) && !visited[tmp]) {
                    if (tmp == T) {
                        cout << step + 1 << endl;
                        return;
                    }
                    q.push({tmp, step + 1});
                    visited[tmp] = 1;
                }
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
