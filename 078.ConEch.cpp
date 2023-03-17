#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    ll dp[10005]={0};
       dp[0]=1;
       for(int i=1;i<=51;i++){
            for(int j=1;j<=3;j++){
                if(i-j>=0) dp[i]+=dp[i-j];
            }
       }
    while(t--){
       int n;
       cin >> n;
       cout << dp[n] << endl;
    }
}