#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mp;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]=1;
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]]){
            cout << a[i]<<" ";
            mp[a[i]]--;
        }
    }
}