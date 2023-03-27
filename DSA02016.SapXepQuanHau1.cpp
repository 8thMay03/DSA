#include <bits/stdc++.h>
using namespace std;
int n,col[1005],res=0;
bool check(int i){
    for(int j=0;j<i;j++){
        if(col[j]==col[i]||abs(col[i]-col[j])==i-j) return false;
    }
    return true;
}
void Try(int i){
    if(i==n){
        res++;
        return;
    }
    for(int j=0;j<n;j++){
        col[i]=j;
        if(check(i)) Try(i+1);
    }
}
int main() {
    int t;
    cin >> t;
    while(t--){
        res=0;
        cin >> n;
        Try(0);
        cout << res << endl;
    }
}