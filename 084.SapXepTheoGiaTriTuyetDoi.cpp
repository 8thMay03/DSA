#include<bits/stdc++.h>

using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<pair<int,int>> v;
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            v.push_back(make_pair(a[i],abs(k-a[i])));
        }
        stable_sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++){
            cout << v[i].first <<" ";
        }
        cout << endl;
    }
}