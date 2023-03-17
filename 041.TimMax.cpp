#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007;

int main(){
   int t;
   cin >> t;
   while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    long long res=0;
    for(int i=0;i<n;i++){
        res=res+(a[i]*i);
        res%=mod;
    }
    cout << res << endl;
   }
}