#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll mod=1e9+7;
ll n,k,a[11][11];
void multiply(ll a[11][11],ll b[11][11]){
    ll c[11][11]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                c[i][j]+=(a[i][k]*b[k][j]);
                c[i][j]%=mod;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) a[i][j]=c[i][j];
    }
}
void power(ll k){
    if(k<=1) return;
    ll b[11][11];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) b[i][j]=a[i][j];
    }
    power(k/2);
    multiply(a,a);
    if(k&1) multiply(a,b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll sum=0;
        cin >> n >> k;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++) cin >> a[i][j];
        }
        power(k);
        for(int i=0;i<n;i++){
            sum+=a[i][n-1];
            sum%=mod;
        }
        cout << sum << endl;
    }
}