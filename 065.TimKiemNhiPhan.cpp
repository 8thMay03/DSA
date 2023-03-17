#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int idx=-1;
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==k) idx=i+1;
        }
        if(idx==-1) cout<<"NO";
        else cout << idx;
        cout << endl;
    }
}