#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,ok=0;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) {
            ll x;
            cin >> x;
            a[i]=x*x;
        }
        sort(a,a+n);
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(binary_search(a+j+1,a+n,a[i]+a[j])){
                    ok=1;
                    break;
                }
            }
            if(ok) break;
        }
        if(ok) cout << "YES";
        else cout <<"NO";
        cout << endl;
    }
}