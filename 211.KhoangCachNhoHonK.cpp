#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,res=0;
        cin >> n >> k;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            auto it=lower_bound(a+i,a+n,a[i]+k);
            res+=(it-1-a-i);
        }
        cout << res << endl;
    }
}