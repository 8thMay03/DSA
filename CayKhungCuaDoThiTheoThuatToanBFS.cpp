#include<bits/stdc++.h>
using namespace std;

int m,n,u,visited[1005];

vector<int>ke[1005];
vector<pair<int,int>> vp;

void BFStree(int u){
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int t:ke[v]){
            if(!visited[t]){
                vp.push_back(make_pair(v,t));
                q.push(t);
                visited[t]=1;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<1005;i++) ke[i].clear(); vp.clear();
        memset(visited,0,sizeof(visited));
        cin >> n >> m >> u;
        while(m--){
            int x,y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        BFStree(u);
        if(vp.size()==n-1){
            for(auto i:vp){
                cout << i.first <<" "<<i.second << endl;
            }
        }
        else cout << -1;
        cout << endl;
    }
}