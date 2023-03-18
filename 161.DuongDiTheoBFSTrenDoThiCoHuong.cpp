#include <bits/stdc++.h>
using namespace std;

#define ll long long

queue<ll> q;
ll a[1005][1005],n,m,u,v,visited[1005],pre[1005];

void BFS(ll u){
    q.push(u);
    visited[u]=1;
    while(!q.empty()){
        ll s=q.front();
        q.pop();
        for(int i=1;i<=n;i++){
            if(!visited[i] && a[s][i]){
                visited[i]=1;
                q.push(i);
                pre[i]=s;
            }
        }
    }
}
void res(ll u,ll v){
    if(!pre[v]) cout <<-1;
    else{
        stack<ll> st;
        st.push(v);
        ll s=pre[v];
        while(s!=u){
            st.push(s);
            s=pre[s];
        }
        st.push(u);
        while(!st.empty()){
            cout << st.top() <<" ";
            st.pop();
        }
    }
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        while(!q.empty()) q.pop();
        memset(visited,0,sizeof(visited));
        memset(pre,0,sizeof(pre));
        memset(a,0,sizeof(a));
        cin >> n >> m >> u >> v;
        while(m--){
            ll x,y;
            cin >> x >> y;
            a[x][y]=1;
        }
        BFS(u);
        res(u,v);
        cout << endl;
    }
}