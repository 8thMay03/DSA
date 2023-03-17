#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,k,x[1005]={0},a[1005];
void display(){
    for(int i=1;i<=k;i++){
        cout << a[x[i]] <<" "; 
    }
    cout << endl;
}
void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k) display();
        else Try(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        Try(1);
    }
}