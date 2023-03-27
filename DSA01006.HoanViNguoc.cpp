#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
int n;
int a[1005],c[1005]={0};
void display(){
    for(int i=1;i<=n;i++){
        cout <<a[i];
    }
    cout <<" ";
}
void Try(int i){
    for(int j=n;j>=1;j--){
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