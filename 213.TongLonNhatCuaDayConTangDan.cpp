#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],dp[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            dp[i]=a[i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j]){
                    dp[i]=max(dp[i],dp[j]+a[i]);
                }
            }
        }
        cout << *max_element(dp,dp+n) << endl;
    }
}