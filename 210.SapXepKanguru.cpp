#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int res=n;
        int a[n+5];
        for(int i=1;i<=n;i++) cin >> a[i];
        sort(a+1,a+n+1,greater<int>());
        int i=1,j=n/2+1;
        while(i<=(n/2+1) && j<=n){
            if(a[i]>=2*a[j]){
                res--;i++;j++;
            }
            else j++;
        }
        cout << res << endl;
    }
}