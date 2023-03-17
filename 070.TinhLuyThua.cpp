#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod=1e9+7;
ll calc(ll a,ll b){
    if(b==0) return 1;
    ll x=calc(a,b>>1)%mod;
    if(b&1) return (((x*x%mod)*a)%mod)%mod;
    return (x*x%mod)%mod;
}
int main(){
    ll a,b;
    while(cin >> a >> b){
        if(a==b && b==0) break;
        cout << calc(a,b) << endl;
    }
}