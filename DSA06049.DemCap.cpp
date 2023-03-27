#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,cnt=0;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
           auto it=lower_bound(a+i+1,a+n,k+a[i]);       //Do aj-ai < k nên ta tìm vị trí j đầu tiên mà aj-ai>=k, các phần tử phía trước sẽ thỏa mãn aj-ai<k.
           cnt+=it-a-i-1;
        }
        cout << cnt << endl;
    }
}