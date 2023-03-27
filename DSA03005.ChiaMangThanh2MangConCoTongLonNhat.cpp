#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(int i=0;i<min(k,n-k);i++){
            sum1+=a[i];
        }
        for(int i=min(k,n-k);i<n;i++){
            sum2+=a[i];
        }
        cout << sum2-sum1 << endl;
    }
}