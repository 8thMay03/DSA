#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n],b[m],c[n+m-1]={0};
        for(int i=0;i<n;i++) cin >> a[i];
        for(int j=0;j<m;j++) cin >> b[j];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                c[i+j] += a[i]*b[j];
            }
        }
        for(int i=0;i<n+m-1;i++) cout << c[i] <<" ";
        cout << endl;
    }
}