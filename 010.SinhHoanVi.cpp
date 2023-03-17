#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
int n,k,a[1005]={0},c[1005]={0};
void display(){
    for(int i=1;i<=n;i++){
        cout <<a[i];
    }
    cout <<" ";
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(c[j]==0){
            a[i]=j;
            c[j]=1;
            if(i==n) display();
            else Try(i+1);
            c[j]=0;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
}