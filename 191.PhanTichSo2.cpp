#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll n,a[1005],tmp,cnt;
vector<ll> v;
vector<vector<ll>> vv;

void Try(int i){
    for(int j=i;j>=1;j--){
        v.push_back(j);
        tmp+=j;
        if(tmp==n){
            vv.push_back(v);
            cnt++;
        }
        else if(tmp<n) Try(j);
        v.pop_back();
        tmp-=j;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        v.clear(); vv.clear(); cnt=0;
        cin >> n;
        Try(n);
        cout << cnt <<endl;
        for(auto v:vv){
            cout<<"(";
            for(int i=0;i<v.size();i++){
                if(i<v.size()-1) cout<< v[i]<<" ";
                if(i==v.size()-1) cout << v[i]<<") ";
            } 
        }
        cout << endl;
    }
}