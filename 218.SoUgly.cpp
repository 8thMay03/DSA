#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c2(0),c3(0),c5(0);
        vector<int>dp(n+1);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            dp[i]=min({dp[c2]*2,dp[c3]*3,dp[c5]*5});
            if(2*dp[c2]==dp[i]) c2++;
            if(3*dp[c3]==dp[i]) c3++;
            if(5*dp[c5]==dp[i]) c5++;
        }
        cout << dp[n-1] << endl;
    }
}