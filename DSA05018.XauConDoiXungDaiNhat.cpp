#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		vector<vector<bool>> dp(s.size() + 1, vector<bool>(s.size() + 1, false));
		for (int i = 0; i < s.size(); i++) {
			dp[i][i] = true;
		}
		int ans = 1;
		for (int l = 2; l <= s.size(); l++) {
			for (int i = 0; i + l <= s.size(); i++) {
				int j = i + l - 1;
				if (j - i == 1) {
					if (s[i] == s[j]) {
						dp[i][j] = true;
						ans = max(ans, l);
					}
				} else if (s[i] == s[j]) {
					if (dp[i + 1][j - 1]) {
						dp[i][j] = true;
						ans = max(ans, l);
					}
				}
			}
		}
		cout << ans << endl;
	}
}
