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
    int t;
    cin >> t;
    while(t--){
        vector<string> v;
        int cnt=1;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int l=0;
        while(!check()){
            string s;
            for(int i=l+1;i<n;i++){
                if(a[l]>a[i]) swap(a[l],a[i]);
            }
            s=s+"Buoc "+to_string(cnt++)+": ";
            for(int i=0;i<n;i++){
                s=s+to_string(a[i])+" ";
            }
            v.push_back(s);
            l++;
        }
        for(int i=v.size()-1;i>=0;i--){
            cout << v[i] <<endl;
        }
    }
}