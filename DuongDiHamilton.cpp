#include<bits/stdc++.h>
using namespace std;

int n,m,visited[1005]={0},ok;

vector<int> v,ke[1005];
vector<vector<int>> vv;

void Try(int i){
    visited[i]=1;
    for(int j:ke[i]){
        if(!visited[j]){
            v.push_back(j);
            visited[j]=1;
            if(v.size()==n-1) {
                ok=1;
                break;
            }
            else if(v.size()<n) Try(j);
            visited[j]=0;
            v.pop_back();
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<100;i++) ke[i].clear();
        v.clear(); vv.clear();
        memset(visited,0,sizeof(visited));
        cin >> n >> m;
        while(m--){
            ok=0;
            int x,y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            Try(i);
            if(ok) break;
            memset(visited,0,sizeof(visited));
        }
        cout << ok << endl;
    }
}