#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second ;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<pair<ll,ll>> v;
        ll n,cnt=1;
        cin >> n;
        for(int i=1;i<=n;i++){
            ll a,b;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end(),cmp);
        ll tmp=v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].first>=tmp) {
                cnt++;
                tmp=v[i].second;
            }
        }
        cout << cnt << endl;
    }
}
