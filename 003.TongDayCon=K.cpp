#include <bits/stdc++.h>
using namespace std;
int n,k,c[1005],a[1005],cnt=0;
void display(){
    for(int i=1;i<=n;i++){
        if(c[i]==1) cout << a[i] <<" ";
    }
    cout << endl;
}
bool check(){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(a[i]*c[i]);
    }
    if(sum==k) return 1;
    return 0;
}
void Try(int i){
    for(int j=0;j<=1;j++){
        c[i]=j;
        if(i==n){
           if(check()){
            display();
            cnt++;
           }
        }
        else Try(i+1);
    }
}
int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++) cin >> a[i];
    Try(1);
    cout << cnt; 
}