#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,vis[1005];
set<int> ke[1005];
vector<pair<int,int>> edge,res;

void BFS(int u){
    queue<int> q;
    q.push(u);
    vis[u]=1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int i:ke[v]){
            if(!vis[i]){
                q.push(i);
                vis[i]=1;
            }
        }
    }
}

void solve(){
    for(auto i:edge){
        int fi=i.first, se=i.second;
        ke[fi].erase(se); ke[se].erase(fi);
        BFS(1);
        for(int j=1;j<=n;j++){
            if(!vis[j]) {
                res.push_back({fi,se});
                break;
            }
        }
        ke[fi].insert(se); ke[se].insert(fi);
        memset(vis,0,sizeof(vis));
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        res.clear(); edge.clear();
        for(int i=0;i<1005;i++) ke[i].clear();
        memset(vis,0,sizeof(vis));
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            ke[x].insert(y);
            ke[y].insert(x);
            edge.push_back({min(x,y),max(x,y)});
        }
        solve();
        for(auto i:res) cout << i.first <<" "<< i.second <<" ";
        cout << endl;
    }
}