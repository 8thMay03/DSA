#include <bits/stdc++.h>
using namespace std;
int n,a[10005],c[10005]={0};
char s;
bool check(){
    for(int i=1;i<=n-1;i++){
        if(a[i]-a[i+1]==1||a[i]-a[i+1]==-1) return 0;
    }
    return 1;
}

void display(){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(c[j]==0){
            a[i]=j;
            c[j]=1;
            if(i==n){
                if(check()) display();
            }
            else Try(i+1);
            c[j]=0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
    }
}