#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dp[105][105][105]={0};
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(dp,0,sizeof(dp));
        int n,m,p;
        cin >> n >> m >> p;
        string s1,s2,s3;
        cin >> s1 >> s2 >> s3;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<p;k++){
                    if(s1[i]==s2[j] && s2[j]==s3[k]) dp[i+1][j+1][k+1]=dp[i][j][k]+1;
                    else dp[i+1][j+1][k+1]=max(dp[i+1][j+1][k],max(dp[i+1][j][k+1],dp[i][j+1][k+1]));
                }
            }
        }
        cout << dp[n][m][p] << endl;
    }
}