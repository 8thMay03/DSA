#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,res=-1;
        cin >> n;
        int a[n],rmax[n]; 
        for(int i=0;i<n;i++) cin >> a[i];
        rmax[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--) rmax[i]=max(rmax[i+1],a[i]);
        int i=0,j=0;
        while(i<n && j<n){
            if(a[i]<rmax[j]){
                res=max(res,j-i);
                j++;
            }
            else i++;
        }
        cout << res << endl;    
    }
}