#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n,sum=0,sumleft=0,cnt=0;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
      }
      for(int i=0;i<n;i++){
        if(2*sumleft==sum-a[i]){
            cout << i+1;
            cnt++;
            break;
        }
        sumleft+=a[i];
      }
      if(cnt==0) cout << -1 ;
      cout << endl;
    }
}