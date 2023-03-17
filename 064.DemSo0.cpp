#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt=0,n,a[1005];
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==0) cnt++;
        }
        cout << cnt << endl;
    }
}