#include<bits/stdc++.h>

using namespace std;

int n,m,mp[10005];
vector<int> ke[10005];

bool bfs(int u){
    queue<int> q;
    q.push(u);
    mp[u]=1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int i:ke[v]){
            if(!mp[i]){
                if(mp[v]==1) mp[i]=2;
                else if(mp[v]==2) mp[i]=1;
                q.push(i);
            }
            else if(mp[i]==mp[v]) return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int ok=1;
        cin >> n >> m;
        for(int i=0;i<10005;i++) ke[i].clear();
        while(m--){
            int x,y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        memset(mp,0,sizeof(mp));
        for(int i=1;i<=n;i++){
            if(!bfs(i)){
                ok=0;
                break;
            }
            memset(mp,0,sizeof(mp));
        }
        if(ok) cout <<"YES";
        else cout <<"NO";
        cout << endl;
    }
}