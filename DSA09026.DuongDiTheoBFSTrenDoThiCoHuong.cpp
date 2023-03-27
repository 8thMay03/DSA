#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,u,v,vis[1005],pre[1005];
set<int> ke[1005];
vector<int> res;

void BFS(int u,int z){
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
                pre[i]=v;
                if(i==z) return;
            }
        }
    }
}
void solve(){
    if(!pre[v]) cout << -1;
    else{
        stack<int> st;
        st.push(v);
        while(v!=u){
            v=pre[v];
            st.push(v);
        }
        while(!st.empty()){
            cout << st.top() <<" ";
            st.pop();
        }
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        res.clear();
        for(int i=0;i<1005;i++) ke[i].clear();
        memset(vis,0,sizeof(vis));
        memset(pre,0,sizeof(pre));
        cin >> n >> m >> u >> v;
        while(m--){
            int x,y;
            cin >> x >> y;
            ke[x].insert(y);
            ke[y].insert(x);
        }
        BFS(u,v);
        solve();
    }
}