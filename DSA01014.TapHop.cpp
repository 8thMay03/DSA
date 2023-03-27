#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n,k,s,tmp,a[1005];
vector<int> v;
vector<vector<int>> vv;
void Try(int i){
    for(int j=i;j<=n;j++){
        v.push_back(j);
        tmp+=j;
        if(v.size()==k){
            if(tmp==s) vv.push_back(v);
        }
        else Try(j+1);
        tmp-=j;
        v.pop_back();
    }
}

int main(){
    while(cin >> n >> k >> s){
        v.clear();
        vv.clear();
        tmp=0;
        if(n==0 && k==0 && s==0) break;
        Try(1);
        cout << vv.size() << endl;
    }
}