#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
   int t;
   cin >> t;
   while(t--){
        int n,m;
        cin >> n >> m;
        vector<set<int>> v(n+1);
        for(int i=0;i<m;i++){
            int x,y;
            cin >> x >> y;
            v[x].insert(y);
            v[y].insert(x);
        }
        for(int i=1;i<=n;i++){
            cout << i <<": ";
            for(auto j:v[i]) cout<< j<<" ";
            cout << endl;
        }
   }
}
