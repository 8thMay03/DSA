#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,visited[1005],ok;
vector<int>a[1005];
vector<int>b[1005];

bool check(){
    for(int i=1;i<=n;i++){
        if(a[i].size()!=b[i].size()) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visited,0,sizeof(visited));
        for(int i=0;i<1005;i++) {
            a[i].clear();
            b[i].clear();
        }
        cin >> n >> m;
        while(m--){
                int x,y;
                cin >> x >> y;
                a[x].push_back(y);
                b[y].push_back(x);
        }
        cout << check();
        cout << endl;
    }
}