#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n,k,ok=0;
        cin >> n >> m >> k;
        int a[n],b[m],c[k];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];
        for(int i=0;i<k;i++) cin >> c[i];
        int ia=0,ib=0,ic=0;
        while( ia < n && ib < m && ic < k ){
            if(a[ia]==b[ib] && b[ib]==c[ic]){
                cout << a[ia] <<" ";
                ia++,ib++,ic++;
                ok=1;
            }
            else if(a[ia]<=b[ib] && a[ia]<=c[ic]) ia++;
            else if(b[ib]<=c[ic] && b[ib]<=a[ia]) ib++;
            else ic++;
        }
        if(!ok) cout <<"NO";
        cout << endl;
    }
}



