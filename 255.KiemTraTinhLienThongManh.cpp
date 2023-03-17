#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a[1005][1005],n,m,visited[1005];

void DFS(int u){
    visited[u]=1;
    for(int i=1;i<=n;i++){
        if(!visited[i] && a[u][i]){
            visited[i]=1;
            DFS(i);
        }
    }
}

bool check(){
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++){
        DFS(i);
        for(int j=1;j<=n;j++){
            if(!visited[j]) return false;
        }
        memset(visited,0,sizeof(visited));
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(visited,0,sizeof(visited));
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            a[x][y]=1;
        }
        if(check()) cout <<"YES";
        else cout <<"NO";
        cout << endl;
    }
}