#include <bits/stdc++.h>
#define ll long long
#define fi first 
#define se second
using namespace std;

int a[1005][1005],n,m, vis[1005][1005]={0};

int solve(){                                
    queue<pair<pair<int,int>,int>> q;               //Đánh dấu vị trí hiện tại và số bước để đến đc vị trí này
    q.push({{1,1},0});
    vis[1][1]=1;
    while(q.size()){
        pair<pair<int,int>,int> t=q.front();
        q.pop();
        if(!vis[t.fi.fi][t.fi.se+a[t.fi.fi][t.fi.se]] && (t.fi.se+a[t.fi.fi][t.fi.se]<=m)){
            if(t.fi.fi==n && t.fi.se+a[t.fi.fi][t.fi.se]==m) return t.se+1;
            q.push({{t.fi.fi,t.fi.se+a[t.fi.fi][t.fi.se]},t.se+1});
            vis[t.fi.fi][t.fi.se+a[t.fi.fi][t.fi.se]]=1;
        }
        if(!vis[t.fi.fi+a[t.fi.fi][t.fi.se]][t.fi.se] && (t.fi.fi+a[t.fi.fi][t.fi.se]<=n)){
            if(t.fi.fi+a[t.fi.fi][t.fi.se]==n && t.fi.se==m) return t.se+1;
            q.push({{t.fi.fi+a[t.fi.fi][t.fi.se],t.fi.se},t.se+1});
            vis[t.fi.fi+a[t.fi.fi][t.fi.se]][t.fi.se]=1;
        }
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(vis,0,sizeof(vis));
        cin >> n >> m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin >> a[i][j];
        }
        cout << solve() << endl;
    }
}