#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,vis[1005],pre[1005],s,e;
vector<int> ke[1005];

bool DFS(int u){
    vis[u]=1;
    for(int v:ke[u]){
        if(!vis[v]){
            pre[v]=u;
            if(DFS(v)) return true;
        }
        else if(v!=pre[u]){
            s=v,e=u;
            if(s==1) return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(pre,0,sizeof(pre));
        memset(vis,0,sizeof(vis));
        for(int i=0;i<1005;i++) ke[i].clear();
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i=1;i<=n;i++) sort(ke[i].begin(),ke[i].end());
        if(DFS(1)){
            stack<int> st;
            st.push(s);
            st.push(e);
            while(e!=s){
                e=pre[e];
                st.push(e);
            }
            while(!st.empty()){
                cout << st.top() <<" ";
                st.pop();
            }
        }
        else cout <<"NO";
        cout << endl;
    }
}