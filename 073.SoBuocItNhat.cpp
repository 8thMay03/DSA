#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5],dp[n+5];
        for(int i=0;i<n;i++) {
            cin >> a[i];
            dp[i]=1;
        }
        for(int i=1;i<n;i++){
           for(int j=0;j<i;j++){
                if(a[i]>=a[j]) dp[i]=max(dp[i],dp[j]+1);
           }
        }
        cout << n - *max_element(dp,dp+n) << endl;
    }
}