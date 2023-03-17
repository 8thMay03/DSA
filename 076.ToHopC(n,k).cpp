#include <bits/stdc++.h>
using namespace std;
int n,k;
long long a[1005][1005];
long long r=1e9+7;
void kt(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=1000;j++){
            if(i==0||i==j) a[i][j]=1;
            else a[i][j]=(a[i-1][j-1]+a[i][j-1])%r;
        }
    }
}
int main(){
    kt();
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        cout << a[k][n] << endl;
    }
}