#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pii pair<int,int>
#define pdd pair<double,double>
using namespace std;
 
bool cmp1(pdd a,pdd b){
    return a.fi<b.fi;
}
bool cmp2(pdd a,pdd b){
    return a.se<b.se;
}
double dist(pdd a,pdd b){
    return sqrt(pow(a.fi-b.fi,2)+pow(a.se-b.se,2));
} 

int main(){
    int t;
    cin >> t;
    while(t--){
        double n,ans=LLONG_MAX;
        cin >> n;
        vector<pdd> v(n);
        for(int i=0;i<n;i++) cin >> v[i].fi >> v[i].se;
        sort(v.begin(),v.end(),cmp1);
        for(int i=0;i<n-1;i++) ans=min(ans,dist(v[i],v[i+1]));
        sort(v.begin(),v.end(),cmp2);
        for(int i=0;i<n-1;i++) ans=min(ans,dist(v[i],v[i+1]));
        cout << fixed << setprecision(6) << ans << endl;
    }
}