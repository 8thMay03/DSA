#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define fi first
#define se second

using namespace std;

int n,m,a,b,c,d;
char x[505][505];

string bfs(int a,int b,int c,int d){
    if(a==c && b==d) return "YES";
    int vis[505][505]={};
    queue<pair<pii,int>> q;
    q.push({{a,b},0});
    vis[a][b]=1;
    while(q.size()){
        auto tmp=q.front(); q.pop();
        int px=tmp.fi.fi,py=tmp.fi.se,step=tmp.se;
        if(step>=3) break;
        for(int i=px;i<n;i++){
            if(x[i][py]=='*') break;
            if(!vis[i][py]){
                if(i==c && py==d) return "YES";
                q.push({{i,py},step+1});
                vis[i][py]=1;
            }
        }
        for(int i=px;i>=0;i--){
            if(x[i][py]=='*') break;
            if(!vis[i][py]){
                if(i==c && py==d) return "YES";
                q.push({{i,py},step+1});
                vis[i][py]=1;
            }
        }
        for(int i=py;i<m;i++){
            if(x[px][i]=='*') break;
            if(!vis[px][i]){
                if(px==c && i==d) return "YES";
                q.push({{px,i},step+1});
                vis[px][i]=1;
            }
        }
        for(int i=py;i>=0;i--){
            if(x[px][i]=='*') break;
            if(!vis[px][i]){
                if(px==c && i==d) return "YES";
                q.push({{px,i},step+1});
                vis[px][i]=1;
            }
        }
    }
    return "NO";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> x[i][j];
                if(x[i][j]=='S'){
                    a=i,b=j;
                }
                if(x[i][j]=='T'){
                    c=i,d=j;
                }
            }
        }
        cout << bfs(a,b,c,d) << endl;
    }
}