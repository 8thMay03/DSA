#include<bits/stdc++.h>
#define ll long long

using namespace std;

int k,n,m,ans=0,pos[1005],vis[1005]={};
vector<int>adj[1005];
set<int> st[1005];

void dfs(int u,set<int> &st){               //Tìm DFS của tất cả các vị trí k người đang đứng, vị trí nào trùng nhau thì là ơi họp mặt
    vis[u]=1;
    st.insert(u);
    for(int i:adj[u]){
        if(!vis[i]) dfs(i,st);
    }
}

int main(){
    map<int,int> mp;
    cin >> k >> n >> m;
    for(int i=0;i<k;i++) cin >> pos[i];
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i=0;i<k;i++){
        memset(vis,0,sizeof(vis));
        dfs(pos[i],st[pos[i]]);
    }
    for(int i=0;i<k;i++){
        for(int j:st[pos[i]])
            mp[j]++;
    }
    for(int i:st[pos[0]]) if(mp[i]==k) ans++;
    cout << ans ;
}

