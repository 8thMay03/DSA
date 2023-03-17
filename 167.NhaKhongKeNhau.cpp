#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n],dp[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
            dp[i]=a[i];
        }
        dp[2]=dp[0]+dp[2];
        for(int i=3;i<n;i++){
            dp[i]=max(dp[i-2]+dp[i],dp[i-3]+dp[i]);
        }
        sort(dp,dp+n);
        cout << dp[n-1] << endl;
    }
}