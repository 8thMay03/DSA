#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,visited[1005];
vector<pair<int,int>> edge;
vector<pair<int,int>> res;
set<int> a[1005];

void DFS(int u){
    visited[u]=1;
    for(int v:a[u]){
        if(!visited[v]){
            DFS(v);
        }
    }   
}

void solve(){
    memset(visited,0,sizeof(visited));
    for(int i=0;i<edge.size();i++){
        int fi=edge[i].first, se=edge[i].second;
        a[fi].erase(se);
        a[se].erase(fi);
        DFS(1);
        for(int j=1;j<=n;j++){
            if(!visited[j]){
                res.push_back(make_pair(fi,se));
                break;
            }
        }
        a[fi].insert(se);
        a[se].insert(fi);
        memset(visited,0,sizeof(visited));
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        res.clear(); edge.clear();
        for(int i=0;i<1005;i++) a[i].clear();
        memset(visited,0,sizeof(visited));
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            a[x].insert(y);
            a[y].insert(x);
            edge.push_back(make_pair(x,y));
        }
        solve();
        for(auto i:res){
            cout << i.first <<" "<<i.second <<" ";
        }
        cout << endl;
    }
}