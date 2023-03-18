#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll mod=1e9+7;
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll dp[10005]={0};
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                if(i-j>=0) dp[i]+=dp[i-j];
                dp[i]%=mod;
            }
        }                       // số cách đi ở bậc thang n là dp[n]=dp[n-1]+dp[n-2]+..+dp[n-3]
        cout << dp[n] << endl;
    }
}