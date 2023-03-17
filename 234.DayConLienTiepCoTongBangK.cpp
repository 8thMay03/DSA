#include <bits/stdc++.h>
#define ll long long

using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,sum=0,ok=0;
        cin >> n >> k;
        ll a[n+5];
        map<ll,ll> dp;
        dp[0]=1;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum==k || dp[sum-k]){               // (xem phía trước có dãy con liên tiếp có tổng bằng sum-k không, nếu có thì có thể loại bỏ để tổng bằng k)
                ok=1;
                break;
            }
            dp[sum]=1;
        }
        if(ok) cout <<"YES";
        else cout <<"NO";
        cout << endl;
    }
}