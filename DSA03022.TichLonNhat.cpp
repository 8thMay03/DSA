#include <bits/stdc++.h>
using namespace std;

int n, a[10010];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n); 
    int ans = max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3]);
    cout << ans << endl;
}