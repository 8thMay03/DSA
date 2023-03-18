#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll mod=1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        ll n,res=0,tmp;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
            pq.push(a[i]);
        }
        while(pq.size()>1){
            tmp=pq.top();
            pq.pop();
            tmp+=pq.top();
            tmp%=mod;
            pq.pop();
            pq.push(tmp);
            res+=(tmp);
            res%=mod;
        }
        cout << res << endl;
    }
}
