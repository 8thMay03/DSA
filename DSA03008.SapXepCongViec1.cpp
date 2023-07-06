#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>

using namespace std;

pii a[1005];

bool cmp(pii a,pii b){
    return a.se < b.se;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,ans=1;
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i].fi;
        for(int i=0;i<n;i++) cin >> a[i].se;
        sort(a,a+n,cmp);
        int tmp=a[0].se;
        for(int i=1;i<n;i++){
            if(a[i].fi>=tmp){
                ans++;
                tmp=a[i].se;
            }
        }
        cout << ans << endl;
    }
}