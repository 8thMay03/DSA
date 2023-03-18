#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll mod=1e9+7;
ll n,k;

void solve(){
    if(k>n){
        cout << 0;
        return;
    }
    ll res=1;
    for(int i=n-k+1;i<=n;i++){
        res*=i;
        res%=mod;
    }
    cout << res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        solve();
        cout << endl;
    }
}