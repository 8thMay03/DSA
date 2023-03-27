#include <bits/stdc++.h>
using namespace std;
 
int n,k,a[1005];
void display(){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout <<endl;
}
bool check(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) cnt++;
    }
    if(cnt==k) return 1;
    return 0;
}
void Try(int i){
    for(int j=0;j<=1;j++){
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
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
}