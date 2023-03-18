#include<bits/stdc++.h>

using namespace std;


int main() {
   int t;
   cin >> t;
   while(t--){
        int n;
        cin >> n;
        int a[n],dp[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
            dp[i]=a[i];
        }
        dp[2]=dp[0]+dp[2];
        for(int i=3;i<n;i++){
            dp[i]=max(dp[i-2],dp[i-3])+a[i];
        }
        cout << *max_element(dp,dp+n) << endl;
   }
}