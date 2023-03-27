#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        map<int,int> mp;
        int n,res=-1;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[a[i]]>1){
                res=a[i];
                break;
            }
        }
        if(res==-1) cout<<"NO";
        else cout << res;
        cout << endl;
    }
}