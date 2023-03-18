#include <bits/stdc++.h>
using namespace std;

int col[100],n,res,tmp,a[100][100];

bool check(int i){
    for(int j=0;j<i;j++){
        if(col[j]==col[i]||i-j==abs(col[i]-col[j])) return false;
    }
    return true;
}
void Try(int i){
    for(int j=0;j<n;j++){
        col[i]=j;
        if(check(i)){
            tmp+=a[i][j];
            if(i==n-1) res=max(res,tmp);
            else Try(i+1);
            tmp-=a[i][j];
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        res=INT_MIN,tmp=0;
        n=8;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        Try(0);
        cout << res << endl;
    }
}