#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> v[100005];
int deg[100005];

int main(){
    int t;
    cin >> t;
    while(t--){   
        for(int i=0;i<100005;i++) v[i].clear();
        memset(deg,0,sizeof(deg));
        int n,m,ok=1;
        cin >> n >> m;  
        while(m--){
            int x,y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            for(int j:v[i]){
                if(v[i].size()!=v[j].size()){
                    ok=0;
                    break;
                }
            }
        }
        if(ok) cout <<"YES";
        else cout <<"NO";
        cout << endl;
    }
}