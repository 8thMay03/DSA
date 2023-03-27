#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,ok=0;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                ll tmp=k-a[i]-a[j];
                if(tmp<a[j+1]) break;
                auto it=lower_bound(a.begin()+j+1,a.end(),tmp);
                if(*it==tmp){
                    ok=1;
                    break;
                }
            }
            if(ok) break;
        }
        if(ok) cout <<"YES";
        else cout <<"NO";
        cout << endl;
    }
}