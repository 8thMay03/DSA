#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,res=INT_MAX;

int main(){
    cin >> n >> m;
    vector<string> v(n),vv(n);
    vector<int> col(m);
    for(int i=0;i<m;i++) col[i]=i;                          // vector col để lưu hoán vị các cột
    for(int i=0;i<n;i++) {cin >> v[i]; vv[i]=v[i];}         // dùng vector vv để lưu lại các xâu gốc
    string s1,s2;
    s1=*max_element(v.begin(),v.end());
    s2=*min_element(v.begin(),v.end());
    int tmp=stoi(s1)-stoi(s2);
    res=min(res,tmp);
    while(next_permutation(col.begin(),col.end())){         // hoán vị các cột
        for(int i=0;i<n;i++){                             
            for(int j=0;j<m;j++){
                v[i][j]=vv[i][col[j]];                          // hoán vị xâu dựa vào hoán vị cột
            }
        }
        s1=*max_element(v.begin(),v.end());
        s2=*min_element(v.begin(),v.end());
        tmp=stoi(s1)-stoi(s2);
        res=min(res,tmp);
    }
    cout << res << endl;
}