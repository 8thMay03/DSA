#include <bits/stdc++.h>
using namespace std;

#define ll long long

int visited[1005]={0},n,m;
vector<int> a[1005];
stack<int> st;
void DFS(int u){
    visited[u]=1;
    st.push(u);
    while(!st.empty()){
        int s=st.top();
        st.pop();
        for(int i:a[s]){
            if(!visited[i]){
                visited[i]=1;
                st.push(s);
                st.push(i);
                break;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<1005;i++) a[i].clear();
        while(!st.empty()) st.pop();
        memset(visited,0,sizeof(visited));
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int q;
        cin >> q;
        while(q--){
            while(!st.empty()) st.pop();
            memset(visited,0,sizeof(visited));
            int u,v;
            cin >> u >> v;
            DFS(u);
            if(visited[v]) cout<<"YES";
            else cout <<"NO";
            cout << endl;
        }
    }
}