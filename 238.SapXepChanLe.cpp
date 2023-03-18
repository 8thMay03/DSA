#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int n;
    cin >> n;
    int a[5+n];
    vector<int> v1,v2;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i&1) v2.push_back(a[i]);
        else v1.push_back(a[i]);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end(),greater<int>());
    for(int i=0;i<n;i+=2){
        a[i]=v1[i/2];
    }
    for(int i=1;i<n;i+=2){
        a[i]=v2[i/2];
    }
    for(int i=0;i<n;i++) cout << a[i] <<" ";
    
}