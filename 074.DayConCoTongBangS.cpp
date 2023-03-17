#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s;
        cin >> n >> s;
        int a[n+5],dp[s+5]={0};
        for(int i=0;i<n;i++){
            cin >> a[i];
            dp[a[i]]=1;
        }
        for(int i=0;i<n;i++){
            for(int j=s;j>=a[i];j--){
                if(dp[j-a[i]]) dp[j]=1;
            }
        }
        if(dp[s]) cout <<"YES";
        else cout <<"NO";
        cout << endl;
    }
}