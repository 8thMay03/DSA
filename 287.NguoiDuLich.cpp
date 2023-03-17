#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,a[20][20],sum,xet[20]={0},cnt,res;

void Try(int i){
    for(int j=2;j<=n;j++){
        if(!xet[j]){
            xet[j]=1;
            cnt++;
            sum+=a[i][j];
            if(cnt==n-1) {
                res=min(res,sum+a[j][1]);
            }
            else if(sum<res) Try(j);
            sum-=a[i][j];
            cnt--;
            xet[j]=0;
        }
    }
}

int main(){
    cnt=0,sum=0,res=INT_MAX;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin >> a[i][j];
    }
    Try(1);
    cout << res << endl;
}