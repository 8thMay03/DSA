#include <bits/stdc++.h>
#define fi first
#define se second

using namespace std;

bool cmp(pair<double,double> a,pair<double,double> b){
    return (a.fi/a.se)>(b.fi/b.se);
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int  n;
        double w,res=0,wei=0;
        cin >> n >> w;
        vector<pair<double,double>> v(n);
        for(int i=0;i<n;i++) cin >> v[i].fi >> v[i].se;
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++){
            res+=v[i].fi;
            wei+=v[i].se;
            if(wei==w) break;
            if(wei>w){
                double tmp=wei-w;
                res-=tmp/v[i].se*v[i].fi;
                break;
            }
        }
        cout << fixed << setprecision(2) << res << endl;
	}
}