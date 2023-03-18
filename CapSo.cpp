#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int dp[n];
        for(int i=0;i<n;i++) dp[i]=1;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            int x,y;
            cin >> x >> y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[i].first>v[j].second) dp[i]=max(dp[j]+1,dp[i]);
            }
        }
        cout <<*max_element(dp,dp+n) << endl;
    }
}