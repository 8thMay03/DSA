#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define psi pair<string,int>
#define fi first
#define se second
#define vi vector<int>

using namespace std;

int n,m,u;
vector<pii> adj[10005];
const int INF=INT_MAX;

void solve(int s){
    vi dist(n+1,INF);
    dist[s]=0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0,s});
    while(!q.empty()){
        auto t=q.top();
        int u=t.second;
        int d=t.first;
        q.pop();
        if(d>dist[u]) continue;
        for(auto i:adj[u]){
            int v=i.first;
            int w=i.second;
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                q.push({dist[v],v});
            }
        }
    }
    for(int i=1;i<=n;i++) cout << dist[i] <<" ";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<1005;i++) adj[i].clear();
        cin >> n >> m >> u;
        while(m--){
            int x,y,z;
            cin >> x >> y >> z;
            adj[x].push_back({y,z});
            adj[y].push_back({x,z});
        }
        solve(u);
        cout << endl;
    }
}
