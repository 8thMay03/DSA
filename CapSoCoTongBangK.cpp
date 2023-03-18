#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long cnt=0;
        map<long long,long long> mp;
        long long n,k;
        cin >> n >> k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(mp.count(k-a[i])) cnt+=mp[k-a[i]];
            mp[a[i]]++;
        }
        cout << cnt << endl;
    }
}