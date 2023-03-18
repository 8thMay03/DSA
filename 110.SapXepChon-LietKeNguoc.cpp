#include <bits/stdc++.h>
using namespace std;
int n,a[1005];

int main(){
    vector<string> v;
    int cnt=1;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++){
        string s;
        int idx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[idx]) idx=j;
        }
        swap(a[i],a[idx]);
        s=s+"Buoc "+to_string(cnt++)+": ";
        for(int i=0;i<n;i++){
            s=s+to_string(a[i])+" ";
        }
        v.push_back(s);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout << v[i] << endl;
    }
}