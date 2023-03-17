#include<bits/stdc++.h>
using namespace std;

int dp[100005];

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<=n;i++) dp[i]=0;
        dp[1]=0;
        for(int i=2;i<=n;i++){
            int a1,a2,a3;
            a1=a2=a3=INT_MAX;
            if(i%3==0) a3=1+dp[i/3];
            if(i%2==0) a2=1+dp[i/2];
            a1=1+dp[i-1];
            dp[i]=min({a1,a2,a3});
        }
        cout << dp[n] << endl;
    }
}

