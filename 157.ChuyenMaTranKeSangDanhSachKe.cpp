#include<bits/stdc++.h>
using namespace std;

#define ll long long
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first < b.first;
}
int main(){
    int n;
    cin >> n;
    int a[n+1][n+1];
    vector<set<int>> v(n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(a[i][j]) {
                v[i].insert(j);
                v[j].insert(i);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(auto j:v[i]) cout << j <<" ";
        cout << endl;
    }
}