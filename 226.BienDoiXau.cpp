#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        int dp[105][105];
        for(int i=0;i<=s1.size();i++) dp[i][0]=i;
        for(int i=0;i<=s2.size();i++) dp[0][i]=i;
        for(int i=1;i<=s1.size();i++){
            for(int j=1;j<=s2.size();j++){
                if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;           //Hoặc là chèn thêm 1 phần từ vào xâu s1,hoặc xóa, hoặc thay đổi
            }
        }
        cout << dp[s1.size()][s2.size()] << endl;
    }
}