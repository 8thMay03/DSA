#include <bits/stdc++.h>
using namespace std;
int a[10005],c[10005]={0};
char s;
bool phuam(int a){
    if(a!=1 && a!=5) return 1;
    return 0;
}
bool check(){
    for(int i=2;i<=(int)(s)-65;i++){
        if(a[i]==1||a[i]==5){
            if(phuam(a[i-1]) && phuam(a[i+1])) return 0;
        }
    }
    return 1;
}
void display(){
    for(int i=1;i<=(int)(s)-64;i++){
        cout << (char)(a[i]+64);
    }
    cout << endl;
}
void Try(int i){
    for(int j=1;j<=(int)(s)-64;j++){
        if(c[j]==0){
            a[i]=j;
            c[j]=1;
            if(i==(int)(s)-64){
                if(check()) display();
            }
            else Try(i+1);
            c[j]=0;
        }
    }
}
int main(){
    cin >> s;
    Try(1);
}