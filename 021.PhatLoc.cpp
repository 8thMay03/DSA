#include <bits/stdc++.h>
using namespace std;
int n,a[1005];

void display(){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout << endl;
}
bool check(){
    if(a[1]!=8||a[n]!=6) return 0;
    for(int i=1;i<n;i++){
        if(a[i]==8 && a[i+1]==8) return 0;
    }
    for(int i=1;i<=n-3;i++){
        if(a[i]==6 && a[i+1]==6 && a[i+2]==6 && a[i+3]==6) return 0;
    }
    return 1;
}
void Try(int i){
    for(int j=6;j<=8;j+=2){
        a[i]=j;
        if(i==n){
            if(check()){
                display();
            }
        }
        else Try(i+1);
    }
}
int main(){
    cin >> n;
    Try(1);
}
