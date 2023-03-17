#include<bits/stdc++.h>
using namespace std;

map<string,int> mp;
vector<string> res;
string a[5][5];
int k,m,n,vis[5][5];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void Try(int i,int j,string s){
    if(mp[s]) {
        res.push_back(s);
    }
    vis[i][j]=1;
    for(int k=0;k<8;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=0 && i1<m && j1>=0 && j1<n && !vis[i1][j1]){
            Try(i1,j1,s+a[i1][j1]);
            vis[i1][j1]=0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(vis,0,sizeof(vis));
        res.clear(); mp.clear();
        cin >> k >> m >> n;
        string s[k];
        for(int i=0;i<k;i++){
            cin >> s[i];
            mp[s[i]]=1;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) cin >> a[i][j];
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                Try(i,j,a[i][j]);;
                memset(vis,0,sizeof(vis));
            }
        }
        if(res.size()==0) cout << -1;
        for(auto i:res) cout << i <<" ";
        cout << endl;
    }
}