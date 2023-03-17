#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n,vis[1005],ok;
vector<int> ke[1005];

void DFS(int u,int p){                  // Tìm xem đồ thị có chu trình hay không
    vis[u]=1;
    for(int v:ke[u]){
        if(!vis[v]) DFS(v,u);
        else if(v!=p) {
            ok=0;
            return;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ok=1;
        cin >> n;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<1005;i++) ke[i].clear();
        for(int i=0;i<n-1;i++){
            int x,y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            DFS(i,0);
            if(!ok){
                cout <<"NO";
                ok=0;
                break;
            }
             memset(vis,0,sizeof(vis));
        }
        if(ok) cout <<"YES";
        cout << endl;
    }
}