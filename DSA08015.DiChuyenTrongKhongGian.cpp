#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second

using namespace std;



struct point{
    int x;
    int y;
    int z;
};

int dx[]={1,0,0,-1,0,0};
int dy[]={0,1,0,0,-1,0};
int dz[]={0,0,1,0,0,-1};
int n,m,l,ex,ey,ez,sx,sy,sz;
char a[35][35][35];

int bfs(){
    queue<pair<point,int>>q ;
    point p,pp;
    p.x=sx, p.y=sy, p.z=sz;
    q.push({p,0});
    a[sx][sy][sz]='#';
    while(q.size()){
        auto tmp=q.front(); q.pop();
        p=tmp.fi;
        int step=tmp.se;
        for(int i=0;i<=5;i++){
            int xx=p.x+dx[i];
            int yy=p.y+dy[i];
            int zz=p.z+dz[i];
            pp.x=xx,pp.y=yy,pp.z=zz;
            if(xx>=0 && xx<n && yy>=0 && yy<m && zz>=0 && zz<l && a[xx][yy][zz]!='#'){
                if(xx==ex && yy==ey && zz==ez) return step+1;
                q.push({pp,step+1});
                a[xx][yy][zz]='#';
            }
        }
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> l;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<l;k++){
                    cin >> a[i][j][k];
                    if(a[i][j][k]=='S'){
                        sx=i,sy=j,sz=k;
                    }
                    if(a[i][j][k]=='E'){
                        ex=i,ey=j,ez=k;
                    }
                }
            }
        }
        cout << bfs() << endl;;
    }
}