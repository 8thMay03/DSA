#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,k,a[25],xet[25],tmp,sum,cnt,ok;
vector<int> v;

void Try(int tmp,int cnt){
    if(ok) return;
    if(cnt==k-1){
        ok=1;
        return;
    }
    for(int j=1;j<=n;j++){
        if(!xet[j]){
            xet[j]=1;
            tmp+=a[j];
            if(tmp==sum){
                Try(0,cnt+1);
            }
            else if(tmp<sum) Try(tmp,cnt);
            tmp-=a[j];
            xet[j]=0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(xet,0,sizeof(xet));
        sum=0,tmp=0,cnt=0,ok=0;
        cin >> n >> k;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        if(sum%k!=0){
            cout << 0 << endl;
        }
        else{
            sum/=k;
            Try(0,0);
            if(ok) cout << 1;
            else cout << 0;
            cout << endl;
        }
    }
}