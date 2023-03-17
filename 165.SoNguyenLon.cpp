#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        int n=s1.size(),m=s2.size();
        int dp[n+5][m+5];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s1[i]==s2[j]) dp[i+1][j+1]=dp[i][j]+1;
                else dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
        cout << dp[n][m] << endl;
    }
}