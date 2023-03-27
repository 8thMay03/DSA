#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,res=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++){
            int j=i,k=i,cnt=0;
            while(a[j]>a[j-1]){
                cnt++; j--;
            }
            while(a[k]>a[k+1]){
                cnt++; k++;
            }
            res=max(res,cnt);
        }
        if(res<n-1) res++;
        cout << res << endl;
    }
}