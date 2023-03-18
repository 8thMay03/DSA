#include <bits/stdc++.h>
using namespace std;

#define ll long long

int a[1005],c[1005],dp[1005][1005];
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(dp,0,sizeof(dp));
        int n,v;
        cin >> n >> v;
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=1;i<=n;i++) cin >> c[i];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=v;j++){
                if(j<a[i]) dp[i][j]=dp[i-1][j];
                else dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+c[i]);
            }
        }
        cout << dp[n][v] << endl;
    }
}