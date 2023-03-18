#include <bits/stdc++.h>
using namespace std;
int n,k,z=1,a[1005]={0};
map<string,int> mp;
string th(){
    string s="";
    for(int i=1;i<=k;i++){
        s+=a[i]-'0';
    }
    return s;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            mp[th()]=z;
            z++;
        }
        else Try(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
        string s="";
        for(int i=1;i<=k;i++){
            cin >> a[i];
            s+=a[i]-'0';
        }
        cout << mp[s]<<endl;
        mp.clear();
        z=1;
    }
}