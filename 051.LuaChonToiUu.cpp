#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(pair<char,int> a, pair<char,int> b){
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<pair<int,int>> v;
        int n,cnt=1;
        cin >> n;
        int a[n+1],b[n+1];
        for(int i=1;i<=n;i++){
            cin >> a[i];
            cin >> b[i];
            v.push_back(make_pair(a[i],b[i]));
        }
        sort(v.begin(),v.end(),cmp);
        int tmp=v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].first>=tmp){
                tmp=v[i].second;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
