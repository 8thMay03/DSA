#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ll n;
    cin >> n;
    ll a[n+1],f[n+1]={0};
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++){
            f[a[i]]=f[a[i]-1]+1;
    }
    cout << n-*max_element(f+1,f+n+1) << endl;
}