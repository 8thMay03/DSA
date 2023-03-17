#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second>b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<pair<int,int>> v;
        map<int,int> mp;
        int n,idx=0,cnt=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for(auto i:mp) v.push_back(i);
        for(int i=v.size()-1;i>=0;i--){
            if(v[i].second>(n/2)){
                cout << v[i].first<<endl;
                cnt++;
                break;
            }
        }
        if(!cnt) cout <<"NO" << endl;
    }
}