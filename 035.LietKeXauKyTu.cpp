#include <bits/stdc++.h>
using namespace std;
int n,k,a[10005]={1};
char s;
void display(){
    for(int i=1;i<=k;i++){
        cout << (char)(a[i]+64);
    }
    cout << endl;
}
void Try(int i){
    for(int j=a[i-1];j<=(int)(s)-64;j++){
        a[i]=j;
        if(i==k) display();
        else Try(i+1);
    }
}
int main(){
    cin >> s >> k;
    Try(1);
}