#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dp[1005][1005]={0};

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(dp,0,sizeof(dp));
        int res=1;
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++) dp[i][i]=1;
        for(int l=2;l<=s.size();l++){
            for(int i=0;i<=s.size()-l;i++){
                int j=i+l-1;
                if(j-i==1){
                    if(s[i]==s[j]){
                        dp[i][j]=1;
                        res=max(res,l);
                    }
                }
                else if(s[i]==s[j]){
                    if(dp[i+1][j-1]){
                        dp[i][j]=1;
                        res=max(res,l);
                    }
                }
            }
        }
        cout << res << endl;
    }
}