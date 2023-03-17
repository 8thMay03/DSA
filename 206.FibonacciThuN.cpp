#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll mod=1e9+7;
void multiply(ll f[2][2],ll m[2][2]){
    ll x = (f[0][0] * m[0][0]%mod + f[0][1] * m[1][0]%mod)%mod;
    ll y = (f[0][0] * m[0][1]%mod + f[0][1] * m[1][1]%mod)%mod;
    ll z = (f[1][0] * m[0][0]%mod + f[1][1] * m[1][0]%mod)%mod;
    ll w = (f[1][0] * m[0][1]%mod + f[1][1] * m[1][1]%mod)%mod;
    f[0][0] = x, f[0][1] = y, f[1][0] = z, f[1][1] = w ;
}
void power(ll f[2][2],ll n){
    if(n<=1) return;
    ll m[2][2]={1,1,1,0};
    power(f,n/2);
    multiply(f,f);
    if(n&1) multiply(f,m);
}
ll fib(ll n){
    ll f[2][2]={1,1,1,0};
    power(f,n-1);
    return f[0][0];
}
int main(){
    int t;
    cin >> t;
    while(t--){
         ll n;
         cin >> n;
         cout << fib(n) << endl;
    }
}