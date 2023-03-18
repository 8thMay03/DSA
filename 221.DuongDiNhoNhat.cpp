#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n][m],dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
                dp[i][j]=a[i][j];
            }
        }
        for(int i=1;i<n;i++){
            dp[i][0]+=dp[i-1][0];
        }
        for(int i=1;i<m;i++){
            dp[0][i]+=dp[0][i-1];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j]+=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
        }
        cout << dp[n-1][m-1] << endl;
    }
}