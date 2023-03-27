#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(pair<char,int> a, pair<char,int> b){
    return a.first < b.first;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<pair<int,int>> v;
        int n,ok=1;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            v.push_back(make_pair(a[i],i));
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<=n/2;i++){
            if(v[i].second+v[n-i-1].second!=n-1){
                ok=-1;
                break;
            }
        }
        if(ok==1) cout <<"Yes";
        if(ok==-1) cout <<"No";
        cout << endl;
    }
}
