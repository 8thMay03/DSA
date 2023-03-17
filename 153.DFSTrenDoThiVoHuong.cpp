#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a[1005][1005],n,m,u,visited[1005]={0};

void DFS(int i){
    visited[i]=1;
    cout << i <<" ";
    for(int j=1;j<=n;j++){
        if(!visited[j] && a[i][j]){
            DFS(j);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        memset(a,0,sizeof(a));
        memset(visited,0,sizeof(visited));
        cin >> n >> m >> u;
        for(int i=0;i<m;i++){
           int x,y;
           cin >> x >> y;
           a[x][y]=1;
           a[y][x]=1;
        }
        DFS(u);
        cout << endl;   
    }
}


