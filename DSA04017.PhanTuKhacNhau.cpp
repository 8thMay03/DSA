#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n-1];
        int res=INT_MAX;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n-1;i++){
            cin >> b[i];
            if(b[i]!=a[i]){
                res=min(res,i+1);
            }
        }
        cout << res << endl;
    }
}