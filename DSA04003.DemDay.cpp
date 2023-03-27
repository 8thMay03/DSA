#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod=123456789;
ll solve(ll n){
   if(n==0) return 1;
   ll x=solve(n>>1) % mod;
   if(n&1) return (((x*x%mod)<<1)%mod)%mod;
   return((x*x%mod)%mod)%mod;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << solve(n-1) << endl;
    }
}
