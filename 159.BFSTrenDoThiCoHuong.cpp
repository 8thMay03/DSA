#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1005][1005],n,m,u,visited[1005]={0};
queue<ll> q;
void BFS(int i){
    q.push(i);
    visited[i]=1;
    cout << i <<" ";
    while(!q.empty()){
        ll j=q.front();
        q.pop();
        for(int t=1;t<=n;t++){
            if(a[j][t] && !visited[t]){
                q.push(t);
                visited[t]=1;
                cout << t <<" ";
            }
        }
    }
}
int main(){
   int t;
   cin >> t;
   while(t--){
        memset(a,0,sizeof(a));
        memset(visited,0,sizeof(visited));
        cin >> n >> m >> u;
        while(m--){
            ll x,y;
            cin >> x >> y;
            a[x][y]=1;
        }
        BFS(u);
        cout << endl;
   }
}