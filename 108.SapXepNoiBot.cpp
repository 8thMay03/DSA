#include <bits/stdc++.h>
using namespace std;
int n,a[1005];
bool check(){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}
void display(){
    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
    }
    cout << endl;
}
int main(){
    int cnt=1;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    while(!check()){
       for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) swap(a[i],a[i+1]);
       }
       cout<<"Buoc "<<cnt++<<": ";
       display();
    }
}
