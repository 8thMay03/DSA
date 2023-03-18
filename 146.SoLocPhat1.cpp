#include <bits/stdc++.h>
using namespace std;

int n,a[1005];
void display(){
    for(int i=0;i<n;i++) cout<<a[i];
    cout <<" ";
}
void Try(int i){
    for(int j=8;j>=6;j-=2){
        a[i]=j;
        if(i==n-1){
            display();
        }
        else Try(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        while(n>0) {
            Try(0);
            n--;
        }
        cout << endl;
    }
}