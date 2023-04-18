#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define fi first
#define se second

using namespace std;

int n,x,y,z,t;
char a[105][105];

int bfs(){
    if(x==z and y==t) return 0;
    int vis[105][105]={};
    queue<pair<pii,int>> q;
    q.push({{x,y},0});
    vis[x][y]=1;
    while(q.size()){
        auto tmp=q.front(); q.pop();
        for(int i=tmp.fi.fi;i<n;i++){
            if(a[i][tmp.fi.se] == 'X') break;
            if(!vis[i][tmp.fi.se]) {
                if(i==z && tmp.fi.se==t) return tmp.se+1;
                q.push({{i,tmp.fi.se},tmp.se+1});
                vis[i][tmp.fi.se]=1;
            }
        }
        for(int i=tmp.fi.fi;i>=0;i--){
            if(a[i][tmp.fi.se] == 'X') break;
            if(!vis[i][tmp.fi.se]) {
                if(i==z && tmp.fi.se==t) return tmp.se+1;
                q.push({{i,tmp.fi.se},tmp.se+1});
                vis[i][tmp.fi.se]=1;
            }
        }
        for(int i=tmp.fi.se;i<n;i++){
            if(a[tmp.fi.fi][i] == 'X') break;
            if(!vis[tmp.fi.fi][i]){
                if(tmp.fi.fi==z && i==t) return tmp.se+1;
                q.push({{tmp.fi.fi,i},tmp.se+1});
                vis[tmp.fi.fi][i]=1;
            }
        }
        for(int i=tmp.fi.se;i>=0;i--){
            if(a[tmp.fi.fi][i] == 'X') break;
            if(!vis[tmp.fi.fi][i]){
                if(tmp.fi.fi==z && i==t) return tmp.se+1;
                q.push({{tmp.fi.fi,i},tmp.se+1});
                vis[tmp.fi.fi][i]=1;
            }
        }
    }
}

int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        cin >> x >> y >> z >> t;
        cout << bfs() << endl;
    }
}