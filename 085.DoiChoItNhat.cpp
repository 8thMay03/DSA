#include <bits/stdc++.h>
using namespace std;
int n,a[1005];
bool check(){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt=0;
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        int l=0;
        while(!check()){
            int tmp=a[l],idx=l;
            for(int i=l+1;i<n;i++){
                if(tmp>a[i]){
                    tmp=a[i];
                    idx=i;
                }
            }
            if(idx!=l){
                swap(a[idx],a[l]);
                cnt++;
            }
            l++;
        }
        cout << cnt << endl;
    }
}