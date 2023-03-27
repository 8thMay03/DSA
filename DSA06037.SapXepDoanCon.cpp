#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
       vector<int> res;
       int n;
       cin >> n;
       int a[n],lmax[n],rmin[n];
       for(int i=0;i<n;i++) cin >> a[i];
       lmax[0]=a[0], rmin[n-1]=a[n-1];
       for(int i=1;i<n;i++) lmax[i]=max(a[i],lmax[i-1]);
       for(int i=n-2;i>=0;i--) rmin[i]=min(a[i],rmin[i+1]);
       for(int i=0;i<n-1;i++){
            if(lmax[i]<=rmin[i+1]) res.push_back(i+1);
       } 
       cout << res.size() << endl;
       for(int i:res) cout << i << " ";
       cout << endl;
    }
}   