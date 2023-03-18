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
    int cnt=1;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int l=0;
    while(!check()){
        for(int i=l+1;i<n;i++){
            if(a[l]>a[i]) swap(a[l],a[i]);
        }
        cout << "Buoc "<< cnt++ <<": ";
        for(int i=0;i<n;i++) cout << a[i]<<" ";
        cout << endl;

        l++;
    }
}