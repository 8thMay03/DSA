#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,visited[1005];
vector<int> res;
vector<int> a[1005];
void DFS(int u){
    visited[u]=1;
    for(int i:a[u]){
        if(!visited[i]){
            DFS(i);
        }
    }
}

void solve(){
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++){
        visited[i]=1;
        if(i==1) DFS(2);
        else DFS(1);
        for(int j=1;j<=n;j++){
            if(!visited[j]) {
                res.push_back(i);
                break;
            }
        }
        memset(visited,0,sizeof(visited));
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
        res.clear();
        memset(a,0,sizeof(a));
        memset(visited,0,sizeof(visited));
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        solve();
        for(int i:res) cout << i <<" ";
        cout << endl;
    }
}