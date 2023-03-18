#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
int n,a[1005];
bool check(){
    for(int i=1;i<n;i++){
        if(a[i]<a[i+1]) return 0; 
    }
    return 1;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++) cin >> a[i];
        if(check()){
            for(int i=1;i<=n;i++){
                 cout << i <<" ";
            }
            cout << endl;
        }
        else {
            int i=n;
            while(a[i]<a[i-1]) i--;
            i--;
            int idx,min=INT_MAX;
            for(int j=i+1;j<=n;j++){
                if(a[j]>a[i] && a[j]<min){
                    min=a[j];
                    idx=j;
                }
            }
            swap(a[idx],a[i]);
            sort(a+i+1,a+n+1);
            for(int i=1;i<=n;i++){
                cout << a[i]<<" ";
            }
            cout << endl;
        }
    }
}