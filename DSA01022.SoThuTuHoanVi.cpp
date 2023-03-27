#include <bits/stdc++.h>
using namespace std;
int n,k=1,a[1005],c[1005]={0};
map<string,int> mp;
string hv(){
    string s="";
    for(int i=1;i<=n;i++){
        s+=a[i]-'0';
    }
    return s;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(c[j]==0){
            a[i]=j;
            c[j]=1;
            if(i==n){
                mp[hv()]=k;
                k++;
            }
            else Try(i+1);
            c[j]=0;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        for(int i=1;i<=n;i++) cin >> a[i];
        string s="";
        for(int i=1;i<=n;i++){
            s+=a[i]-'0';
        }
        cout << mp[s]<<endl;
        mp.clear();
        k=1;
    }
}