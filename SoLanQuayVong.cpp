#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll a[1000005],n;
bool check(){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}
void qv(){
    ll tmp=a[0];
    for(int i=n-1;i>=0;i--){
        ll cur=a[i];
        a[i]=tmp;
        tmp=cur;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll cnt=0;
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        while(!check()){
            qv();
            cnt++;
        }
        cout << cnt << endl;
    }
}