#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
     cin >> t;
     while(t--){
        vector<int> v;
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        int l=0,r=n-1;
        while(a[l]==v[l]) l++;
        while(a[r]==v[r]) r--;
        cout << l+1<<" "<<r+1<<endl;
     }
}