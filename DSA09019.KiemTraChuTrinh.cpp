#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,visited[1005],ok;
vector<int>a[1005];


void DFS(int u,int p){
    visited[u]=1;
    for(int v:a[u]){
        if(!visited[v]) DFS(v,u);
        else if(v!=p) {
            ok=1;
            return;
        }
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            DFS(i,0);
        }
    }
    if(ok) cout <<"YES";
    else cout <<"NO";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ok=0;
        for(int i=1;i<1005;i++) a[i].clear();
        memset(visited,0,sizeof(visited));
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        solve();
    }
}