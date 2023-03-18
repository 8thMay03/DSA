#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,color[1005],ok;
vector<int>a[1005];

void DFS(int u){
    color[u]=1;
    for(int v:a[u]){
        if(color[v]==0){
            DFS(v);
        }
        else if(color[v]==1) {
            ok=1;
            break;
        }
    }
    color[u]=2;
}
void solve(){
    for(int i=1;i<=n;i++){
        if(color[i]==0){
            DFS(i);
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
        memset(color,0,sizeof(color));
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        solve();
    }
}