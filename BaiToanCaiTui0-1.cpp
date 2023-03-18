#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,v;
        cin >> n >> v;
        ll a[n+1],c[n+1],dp[n+1][v+1];
        for(ll i=1;i<=n;i++) cin >> a[i];
        for(ll i=1;i<=n;i++) cin >> c[i];
        memset(dp,0,sizeof(dp));
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=v;j++){
                if(j<a[i]) dp[i][j]=dp[i-1][j];
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+c[i]);
                }
            }    
        }
        cout << dp[n][v] << endl;
    }
}
