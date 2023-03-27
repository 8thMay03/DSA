#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1;
        cin >> s1;
        string s2=s1;
        reverse(s2.begin(),s2.end());
        int n=s1.size(),dp[n+5][n+5];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s1[i]==s2[j]) dp[i+1][j+1]=dp[i][j]+1;
                else dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
        cout << n-dp[n][n] << endl;
    }
}