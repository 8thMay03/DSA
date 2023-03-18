#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n,k,s,tmp,cnt;
vector<int> v;
vector<vector<int>> vv;

bool snt(int a){
    if(a<2) return false;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}

void Try(int i){
    for(int j=i;j<=s;j++){
        if(snt(j)){
            v.push_back(j);
            tmp+=j;
            if(v.size()==n){
                if(tmp==s) {
                    vv.push_back(v);
                    cnt++;
                }
            }
            else Try(j+1);
            tmp-=j;
            v.pop_back();
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        vv.clear(); v.clear();
        tmp=0,cnt=0;
        cin >> n >> k >> s;
        Try(k+1);
        cout << cnt << endl;
        for(auto v:vv){
            for(auto i:v){
                cout << i <<" ";
            }
            cout << endl;
        }
    }
}