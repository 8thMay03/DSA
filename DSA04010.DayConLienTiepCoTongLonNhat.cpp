#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++) cin >> a[i];
      int tmp=0,res=INT_MIN;
      for(int i=0;i<n;i++){
        tmp+=a[i];
        if(tmp<0) tmp=0;
        res=max(res,tmp);
      }
      cout << res << endl;
    }
}
