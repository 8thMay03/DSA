#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll a[1005],n,sum,tmp,ok;

void Try(int i){
    for(int j=i;j<n;j++){
        tmp+=a[j];
        if(tmp==(double)sum/2){
            ok=1;
            return;
        }
        if(tmp<(double)sum/2) Try(j+1);
        tmp-=a[j];
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        sum=0,ok=0,tmp=0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        if(sum&1) cout <<"NO"<<endl;
        else{
            sort(a,a+n);
            Try(0);
            if(ok) cout <<"YES";
            else cout <<"NO";
            cout << endl;
        }
    }
}