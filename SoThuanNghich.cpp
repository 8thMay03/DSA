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
        for(int len=2;len<=s.size();len++){
            for(int i=0;i<=s.size()-len;i++){
                int j=i+len-1;
                if(s[i]==s[j]){
                    if(len==2) {
                        dp[i][j]=1;
                        res=max(res,len);
                    }
                    else if(dp[i+1][j-1]) {
                        dp[i][j]=1;
                        res=max(res,len);
                    }
                }
            }
        }
        cout << res << endl;
    }
}