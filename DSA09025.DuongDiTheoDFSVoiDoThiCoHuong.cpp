#include <bits/stdc++.h>
using namespace std;

#define ll long long

stack<ll> st;
ll a[1005][1005],n,m,u,v,visited[1005],pre[1005];

void DFS(int u){
    st.push(u);
    visited[u]=1;
    while(!st.empty()){
        int s=st.top();
        st.pop();
        for(int i=1;i<=n;i++){
            if(!visited[i] && a[s][i]){
                visited[i]=1;
                st.push(s);
                st.push(i);
                pre[i]=s;
                break;
            }
        }
    }
}

void res(ll u,ll v){
    if(!pre[v]) cout <<-1;
    else{
        stack<ll> st1;
        st1.push(v);
        ll s=pre[v];
        while(s!=u){
            st1.push(s);
            s=pre[s];
        }
        st1.push(u);
        while(!st1.empty()){
            cout << st1.top() <<" ";
            st1.pop();
        }
    }
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        while(!st.empty()) st.pop();
        memset(visited,0,sizeof(visited));
        memset(pre,0,sizeof(pre));
        memset(a,0,sizeof(a));
        cin >> n >> m >> u >> v;
        while(m--){
            ll x,y;
            cin >> x >> y;
            a[x][y]=1;
        }
        DFS(u);
        res(u,v);
        cout << endl;
    }
}