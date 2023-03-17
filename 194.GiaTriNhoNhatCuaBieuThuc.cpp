#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool cmp(ll a,ll b){
    return a>b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n],b[n],res=0;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        sort(b,b+n,cmp);
        sort(a,a+n);
        for(int i=0;i<n;i++){
            res+=(a[i]*b[i]);
        }
        cout << res << endl;
    }
}
