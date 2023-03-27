#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,m,visited[1005],ok;
vector<int>a[1005];


bool check2(){
    for(int i=1;i<=n;i++){
        if(a[i].size()&1) return false;
    }
    return true;
}
bool check1(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i].size()&1) cnt++;
    }
    return cnt==2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visited,0,sizeof(visited));
        for(int i=0;i<1005;i++) a[i].clear();
        cin >> n >> m;
        while(m--){
                int x,y;
                cin >> x >> y;
                a[x].push_back(y);
                a[y].push_back(x);
        }
        if(check1()) cout << 1;
        else if(check2()) cout << 2;
        else cout << 0;
        cout << endl;
    }
}