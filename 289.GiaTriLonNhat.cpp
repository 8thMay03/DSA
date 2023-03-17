#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll n,res=0;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        res+=abs(a[i])+a[i];
    }
    cout << res << endl;
}