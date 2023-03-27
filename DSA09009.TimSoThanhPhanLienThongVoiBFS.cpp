#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll a[1005][1005],n,m,visited[1005];

void DFS(int u){
    visited[u]=1;
    for(int i=1;i<=n;i++){
        if(!visited[i] && a[u][i]){
            visited[i]=1;
            DFS(i);
        }
    }
}
int solve(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cnt++;
            DFS(i);
        }
    }
    return cnt;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        memset(visited,0,sizeof(visited));
        memset(a,0,sizeof(a));
        cin >> n >> m;
        while(m--){
            ll x,y;
            cin >> x >> y;
            a[x][y]=1;
            a[y][x]=1;
        }
        cout << solve() << endl;
    }
}