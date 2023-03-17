#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
int n,k,a[1005],c[1005]={0};
void display(){
    for(int i=1;i<=n;i++){
        cout <<(char)(a[i]+65);
    }
    cout <<" ";
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) display();
        else Try(i+1);
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