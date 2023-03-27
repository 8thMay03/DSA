#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        ll dp[n+5][m+5];
        memset(dp,0,sizeof(dp));
        dp[n][m]=1;
        for(int i=0;i<=n;i++) dp[i][m]=1;
        for(int i=0;i<=m;i++) dp[n][i]=1;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                dp[i][j]+=(dp[i+1][j]+dp[i][j+1]);
            }
        }
        cout << dp[0][0] << endl;
    }
}