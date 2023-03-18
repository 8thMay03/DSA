#include<bits/stdc++.h>

using namespace std;

int a[1005];
void display(){
    cout<<a[1]<<a[2]<<"/"<<a[3]<<a[4]<<"/"<<a[5]<<a[6]<<a[7]<<a[8];
    cout << endl;
}
bool check(){
    if(a[5]==0) return false;
    if(a[1]==0 && a[2]==0|| a[3]==0 && a[4]==0 ||a[3]==2) return false;
    return true; 
}
void Try(int i){
    for(int j=0;j<=2;j+=2){
        a[i]=j;
        if(i==8){
            if(check()) display();
        }
        else Try(i+1);
    }
}
int main(){
    Try(1);
}