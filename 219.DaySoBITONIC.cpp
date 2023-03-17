#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,res=0;
        cin >> n;
        int a[n],dp1[n],dp2[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            dp1[i]=a[i];
            dp2[i]=a[i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j]) dp1[i]=max(dp1[i],dp1[j]+a[i]);
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=n-1;j>i;j--){
                if(a[j]<a[i]) dp2[i]=max(dp2[i],dp2[j]+a[i]);
            }
        }
        for(int i=0;i<n;i++){
            res=max(res,dp1[i]+dp2[i]-a[i]);
        }
        cout << res << endl;
    }
}