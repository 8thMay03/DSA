#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define fi first
#define se second
#define piii pair<int,pair<int,int>>

using namespace std;

int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
const int INF = INT_MAX;
int n,m,a[505][505],d[505][505];

void dijkstra(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            d[i][j]=INF;
        }
    }
    d[1][1]=a[1][1];
    priority_queue<piii,vector<piii>,greater<piii>> q;
    q.push({0,{1,1}});
    while(q.size()){
        auto tmp=q.top(); q.pop();
        int x=tmp.se.fi, y=tmp.se.se;
        for(int i=0;i<=3;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(xx<=n && xx>=1 && yy<=m && yy>=1){
                if(d[xx][yy]>d[x][y]+a[xx][yy]){
                    d[xx][yy]=d[x][y]+a[xx][yy];
                    q.push({d[xx][yy],{xx,yy}});
                }
            }
        }
    }
    cout << d[n][m] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> a[i][j];
            }
        }
        dijkstra();
    }
}