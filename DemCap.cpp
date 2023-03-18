#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,res=0,cnt0=0,cnt1=0,cnt2=0;
        cin >> n >> m;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++){
            cin >> b[i];
            if(b[i]==0) cnt0++;
            if(b[i]==2) cnt2++;
            if(b[i]==1) cnt1++;
        }
        sort(a,a+n);
        sort(b,b+m);
        for(int i=0;i<n;i++){
            if(a[i]==1) res+=cnt0;
            if(a[i]>1){
                if(a[i]==3) res+=cnt2;
                auto it=upper_bound(b,b+m,a[i]);
                if(a[i]==2){
                    while(*it==3||*it==4) it++;
                }
                res+=(b+m-it);
                res+=(cnt0+cnt1);
            }
        }
        cout << res << endl;
    }
}