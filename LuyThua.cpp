#include <bits/stdc++.h>
using namespace std;

long long n,k,mod=1e9+7;
long long lt(long long x, long long y){
    long long res=1;
    while(y>0){
        if(y&1) res=(res*x)%mod;
        y >>= 1;
        x= (x*x)%mod;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout <<lt(n,k)<<endl;
    }
}
