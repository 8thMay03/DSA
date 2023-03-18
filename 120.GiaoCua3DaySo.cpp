#include<bits/stdc++.h>
 using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,l,cnt=0;
        cin >> n >> m >> l;
        int a[n],b[m],c[l];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];
        for(int i=0;i<l;i++) cin >> c[i];
        int i=0,j=0,k=0;
        while(i<n && j<m && k<l){
            if(a[i]==b[j] && b[j]==c[k]){
                cout << a[i] <<" ";
                i++; j++; k++; cnt++;
            }
            else if(a[i]<=b[j] && a[i]<=c[k]) i++;
            else if(b[j]<=a[i] && b[j]<=c[k]) j++;
            else k++;
        }
        if(cnt==0) cout<< -1;
        cout << endl;
    }
}