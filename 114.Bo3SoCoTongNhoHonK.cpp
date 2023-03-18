#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,res=0;
        cin >> n >> k;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                auto it=lower_bound(a+j+1,a+n,k-a[j]-a[i]);
                res+=(it-a-j-1);
            }
        }
        cout << res << endl;
    }
}