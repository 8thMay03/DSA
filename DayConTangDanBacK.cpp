#include<bits/stdc++.h>

using namespace std;
int n,k,a[1005],x[1005]={0},cnt;
bool check(){
    for(int i=1;i<=k-1;i++){
        if(a[x[i]]>=a[x[i+1]]) return false;
    }
    return true;
}
void display(){
    for(int i=1;i<=k;i++){
        cout << a[x[i]] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
            x[i]=j;
            if(i==k){
                if(check()){
                    cnt++;
                }
            }
            else Try(i+1);
    }
}
int main(){
    cnt=0;
    cin >> n >> k;
    for(int i=1;i<=n;i++) cin >> a[i];
    Try(1);
    cout << cnt << endl;
}