#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll n,k,a[1005],tmp,cnt;
vector<ll> v;
vector<vector<ll>> vv;

void Try(int i){
    for(int j=i;j<n;j++){
        v.push_back(a[j]);
        tmp+=a[j];
        if(tmp==k) {
            vv.push_back(v);
            cnt++;
        }
        else if(tmp<k) Try(j);
        tmp-=a[j];
        v.pop_back();
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
       v.clear(); vv.clear(),cnt=0;
       cin >> n >> k;
       for(int i=0;i<n;i++) cin >> a[i];
       sort(a,a+n);
       Try(0);
       if(!cnt) cout << -1 ;
       else{
        cout << cnt <<" ";
        for(auto i:vv){
            cout <<"{";
            for(int j=0;j<i.size();j++){
                if(j<i.size()-1) cout << i[j] <<" ";
                if(j==i.size()-1) cout <<i[j]<<"} ";
            }
        }
       } 
        cout << endl;
    }
}