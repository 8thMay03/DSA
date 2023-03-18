#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll n,k,a[1005],sum,cnt;
bool cmp(ll a,ll b){
    return a>b;
}
vector<ll> v;
void Try(int i){
    for(int j=i;j<n;j++){
        v.push_back(a[j]);
        sum+=a[j];
        if(sum==k){
            ll len=v.size();
            cnt=min(cnt,len);
        }
        else if(sum<k) Try(j+1);
        v.pop_back();
        sum-=a[j];
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        sum=0; v.clear();
        cin >> n >> k;
        cnt=n;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n,cmp);
        Try(0);
        if(cnt==n) cout << -1 << endl;
        else cout << cnt << endl;
    }
}