#include <bits/stdc++.h>
using namespace std;
 
int n,a[1005];

void display(){
    for(int i=1;i<=n;i++){
        if(a[i]==0) cout<<"H";
        else cout <<"A";
    }
    cout <<endl;
}
bool check(){
    if(a[1]!=0) return 0;
    if(a[n]!=1) return 0;
    for(int i=1;i<n;i++){
        if(a[i]==0 && a[i+1]==0) return 0;
    }
    return 1;
}
void Try(int i){
    for(int j=1;j>=0;j--){
            a[i]=j;
            if(i==n){
                if(check()){
                    display();
                }
            }
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