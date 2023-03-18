#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,idx=-1;
        cin >> n >> k;
        int max=INT_MIN;
        int a[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
            if(a[i]<=k){
                if(a[i]>max){
                    max=a[i];
                    idx=i+1;
                }
            }
        }
        cout << idx << endl;
    }
}