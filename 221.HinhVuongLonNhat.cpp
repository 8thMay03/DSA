#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){   
        int n,m,res=0;
        cin >> n >> m;
        int a[n+5][m+5],dp[n+5][m+5];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
                dp[i][j]=a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]){
                    if(a[i-1][j-1] && a[i][j-1] && a[i-1][j]){
                        dp[i][j]=min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]})+1;
                        res=max(res,dp[i][j]);
                    }
                }
            }
        }
        cout << res << endl;
    }
}