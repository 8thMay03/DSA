#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n],idx;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==k) idx=i+1;
        }
        cout << idx << endl;
    }
}