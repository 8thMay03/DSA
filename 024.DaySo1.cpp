#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        for(int i=0;i<n;i++){
            cin >> a[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                a[i][j]=a[i-1][j]+a[i-1][j+1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(j==0) cout<<"[";
                if(j!=n-i-1) cout << a[i][j] <<" ";
                if(j==n-i-1) cout<<a[i][j]<<"]";
            }
            cout << endl;
        }
    }
}