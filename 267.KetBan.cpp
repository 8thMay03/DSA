#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,visited[100005],cnt,res;
vector<int> v[100005];

void DFS(int u){
    cnt++;
    visited[u]=1;
    for(int i:v[u]){
        if(!visited[i]) DFS(i);
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        cnt=0;
        if(!visited[i]){
            DFS(i);
        }
        res=max(res,cnt);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visited,0,sizeof(visited));
        for(int i=0;i<100005;i++) v[i].clear();
        res=0,cnt=0;
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        } 
        solve();
        cout << res << endl;
    }
}