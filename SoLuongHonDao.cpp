#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,a[1005][1005]={0},cnt;
int dx[8]={-1,0,1,-1,1,-1,0,1};
int dy[8]={-1,-1,-1,0,0,1,1,1};

void DFS(int i,int j){
    a[i][j]=0;
    for(int k=0;k<8;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(a[i1][j1]) DFS(i1,j1);
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]){
                cnt++;
                DFS(i,j);
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cnt=0;
        memset(a,0,sizeof(a));
        cin >> n >> m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin >> a[i][j];
        }
        solve();
        cout << cnt << endl;
    }
}