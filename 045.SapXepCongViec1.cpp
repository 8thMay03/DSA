#include<bits/stdc++.h>
using namespace std;
#define ll long long

int s[1005],f[1005],n,cnt;
pair<int,int> p;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cnt=1;
        vector<pair<int,int>> v;
        cin >> n;
        for(int i=0;i<n;i++) cin >> s[i];
        for(int i=0;i<n;i++){
            cin >> f[i];
            v.push_back(make_pair(s[i],f[i]));
        }
        sort(v.begin(),v.end(),cmp);
        int tmp=v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].first>=tmp){
                cnt++;
                tmp=v[i].second;
            }
        }
        cout << cnt << endl;
    }
}