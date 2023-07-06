#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
const int K=105;
const int M=1e4+5;
int t,n,k,m,u,v,x,y,ans;
ii a[K];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
bool b[N][N][4],vst[N][N];

bool dfs(ii st,ii en){
    stack<ii> s;
    s.push(st);
    vst[st.fi][st.se]=true;
    ii c;
    int u,v;
    while(!s.empty()){
        c=s.top();s.pop();
        if (c.fi==en.fi&&c.se==en.se) return true;
        foru(i,0,3)
            if (!b[c.fi][c.se][i]){
                u=c.fi+dx[i];
                v=c.se+dy[i];
                if (u>=1&&u<=n&&v>=1&&v<=n&&!vst[u][v]){
                    s.push({u,v});
                    vst[u][v]=true;
                }
            }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k >> m;
    foru(i,1,m){
        cin >> u >> v >> x >> y;
        if (u>x){
            b[u][v][0]=true;
            b[x][y][2]=true;
        }
        else if (u<x){
            b[u][v][2]=true;
            b[x][y][0]=true;
        }
        if (v>y){
            b[u][v][3]=true;
            b[x][y][1]=true;
        }
        else if (v<y){
            b[u][v][1]=true;
            b[x][y][3]=true;
        }
    }
    foru(i,0,k-1) cin >> a[i].fi >> a[i].se;
    ans=0;
    foru(i,0,k-2)
        foru(j,i+1,k-1){
            fill(vst,false);
            ans+=!dfs(a[i],a[j]);
        }
    cout << ans;
}