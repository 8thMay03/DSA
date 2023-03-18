#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1e9+7,dp[105][50005];

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=k;i++) dp[0][i]=0;
        for(int i=1;i<=n;i++) dp[i][0]=0;
        for(int i=1;i<=9;i++) dp[1][i]=1;
        for(int i=2;i<=n;i++){
            for(int s=0;s<=9;s++){
                for(int j=s;j<=k;j++){
                    dp[i][j]+=dp[i-1][j-s];
                    dp[i][j]%=mod;
                }
            }
        }
        cout << dp[n][k] << endl;
    }
}